//#ifndef OBSERVER_H
//#define OBSERVER_H
#pragma once
#include"Utiles.h"
class EmpresaDots;

class Observer {
	EmpresaDots* object;
	string code;
public:
	Observer();
	Observer(EmpresaDots* object, string code);
	virtual ~Observer();

	virtual void update() = 0;

protected:

	EmpresaDots* getEmpresaDots();
	string getCode();

	void setEmpresaDots(EmpresaDots*);
	void setCode(string);
};
//#endif // !OBSERVER_H

