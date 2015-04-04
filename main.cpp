#include <QtCore>

#include "attributes.h"
#include "attributes.h"

int main(int argc, char **argv)
{
    // initialize Qt Core application
    QCoreApplication app(argc, argv);

    Attribute *attr1 = new Attribute("aa","aaaaa");
    Attribute *attr2 = new Attribute("bb","bbbbb");
    Attribute *attr3 = new Attribute("cc","ccccc");

    Attributes *attrs = new Attributes();
    attrs->addAttribute(*attr1);
    attrs->addAttribute(*attr2);
    attrs->addAttribute(*attr3);

    attrs->vist();

    Attribute* attr = attrs->getAttribute("aa");
    if(attr){
        qDebug()<<attr->getKey() << "  "<< attr->getValue()<<endl;
    }

    attr = attrs->getAttribute("dddd");
    if(attr){
         qDebug()<<attr->getKey() << "  "<< attr->getValue()<<endl;
    }else {
        qDebug()<< "find attribute dddd failed"<<endl;
    }


    return 0;
}
