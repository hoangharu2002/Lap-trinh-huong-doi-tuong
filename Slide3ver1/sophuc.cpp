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

SoPhuc SoPhuc::operator+(SoPhuc sp) {
	SoPhuc tong(this->thuc + sp.thuc, this->ao + sp.ao);
	return tong;
}

SoPhuc SoPhuc::operator-(SoPhuc sp) {
	SoPhuc hieu(this->thuc - sp.thuc, this->ao - sp.ao);
	return hieu;
}

SoPhuc SoPhuc::operator*(SoPhuc sp) {
	SoPhuc tich(this->thuc * sp.thuc - this->ao * sp.ao, this->thuc * sp.ao + this->ao * sp.thuc);
	return tich;
}