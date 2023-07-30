#ifndef _SP_H_
#define _SP_H_

#include <iostream>
using namespace std;

class SoPhuc {
private:
	double thuc, ao;
public:
	SoPhuc() {
		thuc = 0;
		ao = 0;
	}
	SoPhuc(double a, double b) {
		thuc = a;
		ao = b;
	}
	SoPhuc(const SoPhuc& sp) {
		thuc = sp.thuc;
		ao = sp.ao;
	}
	~SoPhuc() {
		thuc = 0;
		ao = 0;
	}
	static void getInput(SoPhuc& sp);
	static void printSoPhuc(SoPhuc sp);
	void set(double a, double b);
	SoPhuc operator+(SoPhuc sp);
	SoPhuc operator-(SoPhuc sp);
	SoPhuc operator*(SoPhuc sp);
	SoPhuc operator/(SoPhuc sp);
};

#endif