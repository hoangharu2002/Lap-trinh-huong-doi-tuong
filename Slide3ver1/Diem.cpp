#include "diem.h"

void Diem::set(double x, double y) {
	this->x = x;
	this->y = y;
}

double Diem::getX() {
	return this->x;
}

double Diem::getY() {
	return this->y;
}

void Diem::tinhtien(double x, double y) {
	this->x += x;
	this->y += y;
}

void Diem::printDiem(Diem d) {
	cout << "(" << d.x << "," << d.y << ")" << " ";
}

void Diem::inputDiem(Diem d) {
	cout << "Nhap toa do diem: ";
	cin >> d.x >> d.y;
}