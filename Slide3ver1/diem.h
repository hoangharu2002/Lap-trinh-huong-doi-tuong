#ifndef _D_H_
#define _D_H_

#include <iostream>
using namespace std;

class Diem {
private:
	double x, y;
public:
	Diem() {
		this->x = 0;
		this->y = 0;
	}
	Diem(double x, double y) {
		this->x = x;
		this->y = y;
	}
	Diem(Diem& d) {
		this->x = d.x;
		this->y = d.y;
	}
	~Diem() {
		this->x = 0;
		this->y = 0;
	}
	void set(double x, double y);
	double getX();
	double getY();
	void tinhtien(double x, double y);
	static void inputDiem(Diem d);
	static void printDiem(Diem d);
};

#endif