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

typedef struct Day {
	unsigned int day, month, year;
};

bool checkLeapYear(Day today) {
	if (today.year % 4 == 0 && today.year % 100 != 0)
		return true;
	else if (today.year % 400 == 0)
		return true;
	return false;
}

bool checkMonth(Day today) {
	if (today.month > 12)
		return false;
	return true;
}

bool checkDay(Day today) {
	if (today.month == 1 || today.month == 3 || today.month == 5 || today.month == 7 || today.month == 8 || today.month == 10 || today.month == 12) {
		if (today.day > 31)
			return false;
	}
	else if (today.month == 2) {
		if (checkLeapYear(today)) {
			if (today.day > 29)
				return false;
		}
		else
			if (today.day > 28)
				return false;
	}
	else {
		if (today.day > 30)
			return false;
	}
	return true;
}

bool checkToday(Day today) {
	if (checkMonth(today)) {
		if (checkDay(today))
			return true;
		cout << "Ngay khong hop le\n";
		return false;
	}
	cout << "Thang khong hop le\n";
	return false;
}

Day getNextday(Day today) {
	Day nextday = today;
	if (today.month == 1 || today.month == 3 || today.month == 5 || today.month == 7 || today.month == 8 || today.month == 10 || today.month == 12) {
		nextday.day = nextday.day % 31 + 1;
		if (nextday.day == 1) {
			nextday.month = nextday.month % 12 + 1;
			if (nextday.month == 1)
				nextday.year += 1;
		}
	}
	else if (today.month == 2) {
		if (checkLeapYear(today)) {
			nextday.day = nextday.day % 29 + 1;
			if (nextday.day == 1) {
				nextday.month = nextday.month % 12 + 1;
			}
		}
		else {
			nextday.day = nextday.day % 28 + 1;
			if (nextday.day == 1) {
				nextday.month = nextday.month % 12 + 1;
			}
		}
	}
	else {
		nextday.day = nextday.day % 30 + 1;
		if (nextday.day == 1) {
			nextday.month = nextday.month % 12 + 1;
		}
	}
	return nextday;
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
	//	//Cach 2
	//{

	//}
	//Cau 4
	//Viet chuong trinh nhap vao mot ngay. Tim ngay ke tiep va xuat ket qua
	{
		Day today;
		cout << "Nhap ngay thang nam: ";
		cin >> today.day >> today.month >> today.year;
		while (!checkToday(today)) {
			cout << "Xin moi nhap lai ngay thang nam: ";
			cin >> today.day >> today.month >> today.year;
		}
		Day nextday;
		nextday = getNextday(today);
		cout << "Ngay tiep theo la: " << nextday.day << "\/" << nextday.month << "\/" << nextday.year << "\n\n";
	}
	system("pause");
	return 0;
}