#include "attributes.h"

#include <QListIterator>
#include <QDebug>

Attributes::Attributes()
{
}

Attribute* Attributes::getAttribute(QString key){
    QList<Attribute>::Iterator it;
    for(it= mAttrs.begin();it != mAttrs.end();++it){
        if((*it).getKey() == key){
            return &(*it);
        }
    }

    return 0;
}

void Attributes::addAttribute(Attribute attr){
    mAttrs.append(attr);
}

void Attributes::vist(){

    QList<Attribute>::Iterator it;
    for(it= mAttrs.begin();it != mAttrs.end();++it){
        qDebug()<<(*it).getKey() << "  "<<(*it).getValue() << endl;
    }
}

Attributes::~Attributes()
{
    if(mAttrs.size() > 0){
        mAttrs.clear();
    }
}

