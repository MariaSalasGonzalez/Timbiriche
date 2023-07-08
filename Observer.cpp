#include "Observer.h"

Observer::Observer() :object(nullptr), code(" ")
{
}

Observer::Observer(EmpresaDots* object, string code) : object(object), code(code)
{
}

Observer::~Observer()
{
    delete object;
}

EmpresaDots* Observer::getEmpresaDots()
{
    return object;
}

string Observer::getCode()
{
    return code;
}

void Observer::setEmpresaDots(EmpresaDots* object)
{
    this->object = object;
}

void Observer::setCode(string code)
{
    this->code = code;
}
