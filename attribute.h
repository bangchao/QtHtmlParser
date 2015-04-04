#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

#include <QString>

class Attribute
{
public:
    Attribute(QString key,QString value);
    QString getValue();
    QString getKey();
    ~Attribute();
private:
    QString mKey;
    QString mValue;
};

#endif // ATTRIBUTE_H
