#pragma once
#include<iostream>
#include <stdlib.h>
using namespace std;
#ifndef STRATEGY_H
#define STRATEGY_H

#include"Computadora.h"

class Machine;

class Estrategia {
public:

	//virtual bool mover();
	virtual string toString();
	virtual bool displayStrategy();



};
#endif // !STRATEGY_H

