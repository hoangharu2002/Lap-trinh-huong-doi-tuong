#ifndef _TG_H_
#define _TG_H_

#include <iostream>
#include "diem.h"
using namespace std;

class TamGiac {
private:
	Diem a, b, c;
public:
	TamGiac() {}
	TamGiac(Diem a, Diem b, Diem c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
	TamGiac(TamGiac& tg) {
		this->a = tg.a;
		this->b = tg.b;
		this->c = tg.c;
	}
	~TamGiac() {}
	static void inputTamGiac(TamGiac& tg);
	static void printTamGiac(TamGiac& tg);
	void tinhtien(double i, double j);	//Tinh tien theo vector (i, j)
};

#endif