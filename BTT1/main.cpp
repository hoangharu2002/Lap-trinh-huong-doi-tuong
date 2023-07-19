#include <iostream>
using namespace std;

int getGCD(int a, int b) {
	if (a == 0)
		return b;
	if (b == 0)
		return a;
	while (a != b) {
		if (a > b) {
			if (a % b == 0)
				return b;
			a = a % b;
		}
		else {
			if (b % a == 0)
				return a;
			b = b % a;
		}
	}
	return a;
}

int getLCM(int a, int b) {
	return a / getGCD(a, b) * b;
}

int main() {
	//cau 1
	//Viet chuong trinh nhap vao hai so nguyen duong a va b. Tim uoc so chung lon nhat cua a va b.
	{
		int a, b;
		cout << "Bai 1:\nNhap lan luot hai so nguyen duong: ";
		cin >> a >> b;
		cout << "Uoc chung lon nhat cua hai so vua nhap la: " << getGCD(a, b) << "\n\n";
	}
	//cau 2
	//Viet chuong trinh nhap vao hai so nguyen duong a va b. Tim boi so chung nho nhat cua a va b.
	{
		int a, b;
		cout << "Bai 2:\nNhap lan luot hai so nguyen duong: ";
		cin >> a >> b;
		cout << "Boi chung lon nhat cua hai so vua nhap la: " << getLCM(a, b) << "\n\n";
	}
	//cau 3
	//Nhap vao so nguyen duong n. In ra man hinh cac so nguyen to la so le <= n.
	{
		int n;
		cout << "Nhap mot so nguyen duong n: ";
		cin >> n;
		if (n == 0)
			cout << "Khong co so nguyen to nao <= 0";
		else if (i == 1)
			cout << "Khong co so nguyen to nao <= 1";
		else {
			for (int i = 2; i <= )
		}
	}
	system("pause");
	return 0;
}