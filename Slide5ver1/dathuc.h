#pragma once
#ifndef _DT_H_
#define _DT_H_
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

class DaThuc {
private:
	int bac;
	double* heso;
	static void getInputHeso(DaThuc& f);
public:
	DaThuc(int bac = 0);
	DaThuc(int bac, double* a);
	DaThuc(const DaThuc& f);
	double getValueAtX(double x);
	friend istream& operator>>(istream& cin, DaThuc& f);
	friend ostream& operator<<(ostream& cout, const DaThuc& f);
	double& operator[](int i);
	DaThuc operator+(const DaThuc& f);
	DaThuc operator-(const DaThuc& f);
	DaThuc& operator=(const DaThuc& f);
};

#endif