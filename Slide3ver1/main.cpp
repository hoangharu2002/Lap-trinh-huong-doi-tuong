#include <iostream>
#include "hocsinh.h"
#include "sophuc.h"
#include "diem.h"
#include "tamgiac.h"
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
	/*{
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
		cout << "Tich cua hai so phuc la: "; SoPhuc::printSoPhuc(sp1 * sp2); cout << endl;
		cout << "Thuong cua hai so phuc la: "; SoPhuc::printSoPhuc(sp1 / sp2); cout << endl;
	}*/



	//Bai tap 3
	//Thiet lap lop bieu dien khai niem diem trong mat phang voi hai thanh phan du lieu: hoanh do va tung do;
	//Viet cac phuong thuc thiet lap; Cac ham thanh phan cho phep thay doi noi dung cua diem; Lay hoanh do, tung do; Tinh tien;
	//Nhap, xuat mot diem; Ham ve diem trong che do do hoa;
	//{
	//	Diem d;
	//	//Kiem tra ham input
	//	Diem::inputDiem(d);
	//	Diem::printDiem(d);
	//	//Kiem tra ham set
	//	d.set(2, 3);
	//	Diem::printDiem(d);
	//	//Kiem tra ham get
	//	cout << "\nToa do x: " << d.getX();
	//	cout << "\nToa do y: " << d.getY();
	//	//Kiem tra ham tinhtien
	//	d.tinhtien(-1, 1);
	//	cout << "\n";
	//	Diem::printDiem(d);
	//}



	//Bai tap 4
	//Viet dinh nghia lop TamGiac de bieu dien khai niem tam giac trong mat phang voi cac phuong thuc thiet lap, huy bo (neu co);
	//Cac ham thanh phan gom co: nhap, xuat, tinh tien, quay, phong to, thu nho va ve tam giac.
	//Viet dinh nghia lop DaGiac de bieu dien khai niem da giac trong mat phang voi cac ham thanh phan tuong tu lop TamGiac;
	//Xay dung lop thoi gian voi thanh phan du lieu gom co gio, phut, giay va cac phep toan >>, << va ++, --.
	{
		Diem a(0, 0), b(1, 0), c(0, 1);
		TamGiac tg(a, b, c);
		cout << "Tam giac vua tao la: ";
		TamGiac::printTamGiac(tg);
		tg.tinhtien(1, -1);
		cout << "\nTam giac sau khi tinh tien: ";
		TamGiac::printTamGiac(tg);
	}
	cout << endl;
	system("pause");
	return 0;
}