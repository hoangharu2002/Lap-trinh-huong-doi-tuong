#include "sophuc.h"

void SoPhuc::getInput(SoPhuc& sp) {
	cout << "Nhap gia tri phan thuc: "; cin >> sp.thuc;
	cout << "Nhap gia tri phan ao: "; cin >> sp.ao;
}

void SoPhuc::set(double a, double b) {
	this->thuc = a;
	this->ao = b;
}

void SoPhuc::printSoPhuc(SoPhuc sp) {
	cout << sp.thuc << "+" << sp.ao << "i";
}

