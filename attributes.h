#ifndef ATTRIBUTES_H
#define ATTRIBUTES_H

#include "attribute.h"
#include <QList>

class Attributes
{
public:
    Attributes();
    Attribute* getAttribute(QString key);
    void addAttribute(Attribute attr);
    void vist();
    ~Attributes();
private:
    QList<Attribute> mAttrs;
};

#endif // ATTRIBUTES_H
