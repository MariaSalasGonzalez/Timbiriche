#ifndef EMPRESADOTS_H
#define EMPRESADOTS_H
#include"Utiles.h"
#include<vector>
#include"Usuario.h"
#include"Observer.h"

class Observer;
class EmpresaDots { ////Subject
protected:
	vector<Observer*> views;
	string code;
	int pago;
public:

	EmpresaDots();
	EmpresaDots(string, int);
	virtual ~EmpresaDots();

	void attach(Observer* object);
	void detach(Observer* object);
	void notify();

	void setCode(string code);
	string getCode();

	void generaCodigo();

	string toString();
	EmpresaDots& operator=(EmpresaDots&);
	friend ostream& operator<<(ostream& out, EmpresaDots& empDots);

};

#endif // !EMPRESADOTS_H

