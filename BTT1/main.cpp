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

bool checkPrimeNumber(unsigned int n) {
	for (int i = 2; i * i <= n; ++i)
		if (n % i == 0)
			return false;
	return true;
}

int main() {
	////cau 1
	////Viet chuong trinh nhap vao hai so nguyen duong a va b. Tim uoc so chung lon nhat cua a va b.
	//{
	//	int a, b;
	//	cout << "Bai 1:\nNhap lan luot hai so nguyen duong: ";
	//	cin >> a >> b;
	//	cout << "Uoc chung lon nhat cua hai so vua nhap la: " << getGCD(a, b) << "\n\n";
	//}
	////cau 2
	////Viet chuong trinh nhap vao hai so nguyen duong a va b. Tim boi so chung nho nhat cua a va b.
	//{
	//	int a, b;
	//	cout << "Bai 2:\nNhap lan luot hai so nguyen duong: ";
	//	cin >> a >> b;
	//	cout << "Boi chung lon nhat cua hai so vua nhap la: " << getLCM(a, b) << "\n\n";
	//}
	//cau 3
	//Nhap vao so nguyen duong n. In ra man hinh cac so nguyen to la so le <= n.
		//Cach 1
	{
		int n;
		cout << "Nhap mot so nguyen duong n: ";
		cin >> n;
		if (n == 0 || n == 1 || n == 2)
			cout << "Khong co so nguyen to le nao nho hon " << n;
		else {
			for (int i = 3; i * i <= n; ++i)
				if (checkPrimeNumber(i))
					cout << i << " ";
			if (checkPrimeNumber(n))
				cout << n << "\n\n";
		}
	}
		//Cach 2
	{

	}
	//Cau 4
	{
		int day, month, year;
		cout << "Nhap ngay thang nam: ";
		cin >> day >> month >> year;

	}
	system("pause");
	return 0;
}