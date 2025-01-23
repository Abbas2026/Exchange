#include "crypto.h"

Crypto::Crypto() {}

Crypto::Crypto(QString name, QString description, QString symbol,int price,QString id)
    : name(name),description(description),symbol(symbol),id(id),price(price)
{}

void Crypto::setPrice(int _price)
{
    price=_price;
}

bool Crypto::operator==(const Crypto &a)const
{
    if(
        name==a.name &&
        id==a.id &&
        price==a.price &&
        symbol==a.symbol
        )
        return true;
    return false;
}
QString Crypto::getName()const{return name;}
QString Crypto::getId()const{return id;}
QString Crypto:: getDes()const{return description;}
QString Crypto::getSymbol()const{return symbol;}
int Crypto::getPrice()const{return price;}
void Crypto::setName(QString _name){name=_name;}
void Crypto::setId(QString _id){id=_id;}
void Crypto::setDes(QString des){description=des;}
void Crypto::setSymbol(QString _symbol){symbol=_symbol;}
