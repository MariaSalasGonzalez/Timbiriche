#include "EmpresaDots.h"
#include<random>
#include<time.h>
#include<stdlib.h>
EmpresaDots::EmpresaDots()
{
}

EmpresaDots::EmpresaDots(string code, int pago) :code(code), pago(pago)
{
}

EmpresaDots::~EmpresaDots()
{
    views.clear();
}

void EmpresaDots::attach(Observer* object)
{
    views.push_back(object);
}

void EmpresaDots::detach(Observer* object)
{
    for (int i = 0; i < views.size(); i++) {
        views.shrink_to_fit();
        views.clear();
    }
}

void EmpresaDots::notify()
{

    for (int i = 0; i < views.size(); i++) {
        views[i]->update();
    }
}

void EmpresaDots::setCode(string code)
{
    this->code = code;
}

string EmpresaDots::getCode()
{
    return code;
}


string EmpresaDots::toString()
{
    stringstream a;
    a << "Your access code:" << code << "\n";
    return a.str();
}

EmpresaDots& EmpresaDots::operator=(EmpresaDots& empDots)
{
    this->code = empDots.code;
    return *this;
}

ostream& operator<<(ostream& out, EmpresaDots& object)
{
    out << object.toString();
    return out;
}

void EmpresaDots::generaCodigo()
{
   /* srand(time(0));
    struct timeval time;
    char codigo[8];
    srand((time.tv_sec*1000)+(time.tv_sec/1000));
    for (int i = 0; i <=7; i++)
    {
    	codigo[i] = 33 + rand() % (126 - 33);
    	cout << codigo;
    }*/
}
