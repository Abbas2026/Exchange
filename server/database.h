#ifndef DATABASE_H
#define DATABASE_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStringList>
#include <QSqlError>
#include <vector>
#include <string>

#include <exception>
#include <mutex>

using namespace std;

class DataBase
{
private:
    QSqlDatabase db;
    bool open();
    void databaseInitializer();
    //singelton
    static DataBase* instance;
    mutex dbMutex;
    DataBase();
    DataBase(const DataBase&) = delete; // copy constructor
    DataBase& operator=(const DataBase&) = delete;

public:
    vector<string> select(const QString& queryStr);
    bool insert(const QString& queryText);
    bool deleteByID(int recordId,const QString& table_name);
    bool deleteByQuery(const QString& _query);
    bool update(const QString& _query);

    static DataBase* getInstance()
    {
        if (instance == nullptr) {
            instance = new DataBase();
            instance->databaseInitializer();
        }
        return instance;
    }

};

#endif // DATABASE_H
