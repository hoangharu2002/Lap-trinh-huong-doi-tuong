#include "tamgiac.h"

void TamGiac::inputTamGiac(TamGiac& tg) {
	Diem::inputDiem(tg.a);
	Diem::inputDiem(tg.b);
	Diem::inputDiem(tg.c);
}

void TamGiac::printTamGiac(TamGiac& tg) {
	cout << "(";
	Diem::printDiem(tg.a);
	Diem::printDiem(tg.b);
	Diem::printDiem(tg.c);
	cout << "\b)";
}

void TamGiac::tinhtien(double i, double j) {
	this->a.tinhtien(i, j);
	this->b.tinhtien(i, j);
	this->c.tinhtien(i, j);
}