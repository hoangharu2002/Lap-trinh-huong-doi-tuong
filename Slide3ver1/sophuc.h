#ifndef _SP_H_
#define _SP_H_

#include <iostream>
using namespace std;

class SoPhuc {
private:
	double thuc, ao;
public:
	SoPhuc() {
		this->thuc = 0;
		this->ao = 0;
	}
	SoPhuc(double a, double b) {
		this->thuc = a;
		this->ao = b;
	}
	SoPhuc(const SoPhuc& sp) {
		this->thuc = sp.thuc;
		this->ao = sp.ao;
	}
	~SoPhuc() {
		this->thuc = 0;
		this->ao = 0;
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