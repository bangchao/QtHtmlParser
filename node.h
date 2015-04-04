#ifndef NODE_H
#define NODE_H

#include "attributes.h"
#include "attribute.h"
#include <QString>

class Node
{
public:
    Node();
    ~Node();

public:
    QString getName();
    void setName(QString name);
    QString getValue();
    void setValue(QString value);

protected:
    // 节点属性
    QString mName;
    // 节点名称
    QString mValue;


private:
    Attributes *mAttrs;

public :
    Attributes* getAttributes();
    void addAttribute(Attribute attr);

private:
    Node* parent;
    Node* firstChild;
    Node* lastChild;
    Node* nextSibling;
    Node* previousSibling;


};

#endif // NODE_H
