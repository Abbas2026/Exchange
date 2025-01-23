#ifndef CRYPTO_H
#define CRYPTO_H

#include "QString"

class Crypto
{
public:
    Crypto();
    Crypto(QString name,QString description, QString symbol,int price,QString id);
    QString getName()const;
     QString getId()const;
     QString getDes()const;
      QString getSymbol()const;
     int getPrice()const ;
      void setName(QString _name);
      void setId(QString);
      void setDes(QString);
      void setSymbol(QString);
      void setPrice(int);
      bool operator==(const Crypto& )const;
private:
    QString name;
    QString description;
    QString symbol;
    QString id;
    int price;// in doller

};

#endif // CRYPTO_H
