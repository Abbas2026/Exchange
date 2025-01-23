#include "database.h"

// Initialize the static instance pointer
DataBase* DataBase::instance = nullptr;

void DataBase::databaseInitializer()
{
    string query1 = "CREATE TABLE IF NOT EXISTS Accounts (userID INTEGER PRIMARY KEY,email VARCHAR(255),password VARCHAR(255),username VARCHAR(255),level VARCHAR(255),name VARCHAR(255),phone VARCHAR(255),address VARCHAR(255));";
    string query2 = "CREATE TABLE IF NOT EXISTS invitation (inviter INTEGER,invited INTEGER);";
    string query3 = "CREATE TABLE IF NOT EXISTS wallet_balance (owner INTEGER,walletIP INTEGER PRIMARY KEY,USD float,BTC float,ETH float,USDT float,BNB float,SOL float);";

    QString q1 = query1.c_str();
    QString q2 = query2.c_str();
    QString q3 = query3.c_str();

    bool b1 = instance->insert(q1);
    bool b2 = instance->insert(q2);
    bool b3 = instance->insert(q3);

    if(!(b1 && b2 && b3))
    {
        throw runtime_error("could not creat tabeles in database");
    }

}
DataBase::DataBase()
{
}
bool DataBase::open()
{
    db = QSqlDatabase::addDatabase("QSQLITE","mydb");
    db.setDatabaseName("./DataBase.db");
    if(db.open())
    {
        qDebug() << "Database opened successfully";
        return true;
    }else
    {
        qDebug() << "Database did not opened successfully";
        throw runtime_error("can not open database");
        return false;
    }
}
vector<string> DataBase::select(const QString& queryStr)
{
    dbMutex.lock();
    open();
    vector<string> result;

    QSqlQuery query(db);
    if (query.exec(queryStr))
    {
        while (query.next())
        {
            QSqlRecord record = query.record();
            for (int i = 0; i < record.count(); ++i)
            {
                result.push_back(record.value(i).toString().toStdString());
            }
        }
        qDebug() << "result of select query :";
        for (int i = 0; i < result.size(); ++i) {
            qDebug() << result[i];
        }

    } else {
        // Handle query execution error (e.g., log or display an error message)
        qDebug() << "Query execution failed:" << query.lastError().text();
        throw runtime_error("query execution failed");

    }
    db.close();
    dbMutex.unlock();
    return result;
}
bool DataBase::insert(const QString& queryText) {

    dbMutex.lock();
    open();

    QSqlQuery query(db);

    if (!query.exec(queryText))
    {
        qDebug() << "Error executing query:" << query.lastError().text();
        return false;
    }

    // Commit the transaction
    db.commit();
    db.close();

    qDebug() << "Query inserted successfully!";
    dbMutex.unlock();
    return true;
}
bool DataBase::deleteByID(int recordId,const QString& table_name)
{
    dbMutex.lock();
    open();

    QSqlQuery query;
    query.prepare("DELETE FROM :my_table WHERE id = :recordId");
    query.bindValue(":my_table", table_name);
    query.bindValue(":recordId", recordId);

    if (!query.exec()) {
        qDebug() << "Error executing query:" << query.lastError().text();
        return false;
    }

    // Commit the transaction
    db.commit();
    db.close();

    qDebug() << "Record deleted successfully!";
    dbMutex.unlock();
    return true;
}
bool DataBase::deleteByQuery(const QString& _query)
{
    dbMutex.lock();
    open();

    QSqlQuery query(db);

    if (!query.exec(_query))
    {
        qDebug() << "Error executing query:" << query.lastError().text();
        return false;
    }

    db.commit();
    db.close();

    qDebug() << "Query deleted successfully!";
    dbMutex.unlock();
    return true;
}
bool DataBase::update(const QString& _query)
{
    dbMutex.lock();
    open();
    QSqlQuery query(db);
    if (!query.exec(_query)) {
        qDebug() << "Error executing query:" << query.lastError().text();
        return false;
    }

    // Commit the transaction
    db.commit();
    db.close();

    qDebug() << "Query executed successfully!";
    dbMutex.unlock();
    return true;
}
