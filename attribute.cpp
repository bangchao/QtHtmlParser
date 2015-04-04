#include "attribute.h"

Attribute::Attribute(QString key,QString value)
{
    mKey = key;
    mValue = value;
}

QString Attribute::getValue(){
    return mValue;
}

QString Attribute::getKey(){
    return mKey;
}

Attribute::~Attribute()
{

}

