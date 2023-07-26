#include <iostream>
#include "hocsinh.h"
using namespace std;

int main() {
	//Bai tap 1
	//Viet chuong trinh cho phep nhap, xuat, khoi tao mot hoc sinh. Thong tin can quan tam ve mot hoc sinh gom co:
	//Ma hoc sinh (8 ky tu);  Ho ten hoc sinh (30 ky tu); Diem toan (int); Diem van (int).
	{
		HocSinh hs1;
		HocSinh::inputHocSinh(hs1);
		HocSinh::printHocSinh(hs1);

		HocSinh hs2(hs1);
		HocSinh::printHocSinh(hs2);
	}
	system("pause");
	return 0;
}