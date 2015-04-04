#include "node.h"

Node::Node()
{
    mAttrs = new Attributes();
}

Node::~Node()
{
    delete mAttrs;
}

QString Node::getName(){
    return mName;
}

void Node::setName(QString name){
    mName = name;
}

QString Node::getValue(){
    return mValue;
}

void Node::setValue(QString value){
    mValue = value;
}

Attributes* Node::getAttributes()
{
    return mAttrs;
}

void Node::addAttribute(Attribute attr){
    mAttrs->addAttribute(attr);
}

