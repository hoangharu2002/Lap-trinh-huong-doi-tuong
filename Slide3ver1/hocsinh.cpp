#include "hocsinh.h"

HocSinh::HocSinh() {
	this->dtoan = 0;
	this->dvan = 0;
	this->mahs = new char[9] {'\0'};
	this->hoten = new char[50] {'\0'};
}

HocSinh::HocSinh(const HocSinh& hs) {
	this->dtoan = hs.dtoan;
	this->dvan = hs.dvan;
	this->mahs = new char[8] {'\0'};
	for (int i = 0; hs.mahs[i] != '\0'; ++i)
		this->mahs[i] = hs.mahs[i];
	this->hoten = new char[50] {'\0'};
	for (int i = 0; hs.hoten[i] != '\0'; ++i)
		this->hoten[i] = hs.hoten[i];
}

HocSinh::~HocSinh() {
	delete[]this->hoten;
	delete[]this->mahs;
	this->dtoan = 0;
	this->dvan = 0;
}

void HocSinh::inputHocSinh(HocSinh& hs) {
	cout << "Nhap cac thong tin cua hoc sinh!\n";
	cout << "Ma so hoc sinh: ";	cin >> hs.mahs;
	cin.ignore();
	cout << "Ho va ten hoc sinh: "; cin.getline(hs.hoten, 50, '\n');
	cout << "Diem toan: "; cin >> hs.dtoan;
	cout << "Diem van: "; cin >> hs.dvan;
	cout << endl;
}

void HocSinh::printHocSinh(const HocSinh &hs) {
	cout << "Thong tin hoc sinh:\n";
	cout << "Ho va ten: " << hs.hoten << endl;
	cout << "Ma so hoc sinh: " << hs.mahs << endl;
	cout << "Diem toan: " << hs.dtoan << endl;
	cout << "Diem van: " << hs.dvan << endl;
	cout << endl;
}