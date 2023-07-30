#include <iostream>
#include "hocsinh.h"
#include "sophuc.h"
using namespace std;

int main() {
	//Bai tap 1
	//Viet chuong trinh cho phep nhap, xuat, khoi tao mot hoc sinh. Thong tin can quan tam ve mot hoc sinh gom co:
	//Ma hoc sinh (8 ky tu);  Ho ten hoc sinh (30 ky tu); Diem toan (int); Diem van (int).
	/*{
		HocSinh hs1;
		HocSinh::inputHocSinh(hs1);
		HocSinh::printHocSinh(hs1);

		HocSinh hs2(hs1);
		HocSinh::printHocSinh(hs2);
	}*/
	//Bai tap 2
	//Xay dung lop bieu dien khai niem so phuc voi thanh phan du lieu gom: phan thuc va phan ao; Cac ham thanh phan gom:
	//Nhap, xuat, dinh gia tri cho so phuc, cong, tru, nhan, chia hai so phuc.
	//Viet chuong trinh cho phep vao hai so phuc, in ra ket qua cac phep toan cong, tru, nhan, chia hai so phuc nhap vao.
	{
		SoPhuc sp1, sp2(2, 3);
		SoPhuc::getInput(sp1);
		cout << "So phuc thu 1 la: ";
		SoPhuc::printSoPhuc(sp1);
		cout << endl;
		cout << "So phuc thu 2 la: ";
		SoPhuc::printSoPhuc(sp2);
		cout << endl;
		cout << "Tong cua hai so phuc la: "; SoPhuc::printSoPhuc(sp1 + sp2); cout << endl;
		cout << "Hieu cua hai so phuc la: "; SoPhuc::printSoPhuc(sp1 - sp2); cout << endl;
		
	}
	system("pause");
	return 0;
}