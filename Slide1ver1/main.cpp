#include <iostream>
#include <stdio.h>
using namespace std;

void getArrayNumber(int* arr, int n) {
	cout << "Hay nhap mang co 4 phan tu: ";
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
}

void printArrayNumber(int* arr, int n) {
	cout << "Mang cua ban la: ";
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
}

void getArrayFromFile(int* arr, int n, const char* fpath) {
	FILE* file = fopen(fpath, "r");
	for (int i = 0; i < n; ++i)
		fscanf(file, "%d", &arr[i]);
	fclose(file);
}

void printArrayToFile(int* arr, int n, const char* fpath) {
	FILE* file = fopen(fpath, "w+");
	for (int i = 0; i < n; ++i)
		fprintf(file, "%d ", arr[i]);
	fclose(file);
}
	
int main() {
	//nhap 4 so nguyen va xuat cac gia tri vua nhap
	//cach 1
	{
		int a, b, c, d;
		cout << "Cach 1\nNhap lan luot 4 so nguyen: ";
		cin >> a >> b >> c >> d;
		cout << "Cac so da nhap la: " << a << " " << b << " " << c << " " << d << "\n";
	}
	//cach 2
	{
		int a[4];
		cout << "Cach 2\nNhap lan luot 4 so nguyen: ";
		cin >> a[0] >> a[1] >> a[2] >> a[3];
		cout << "Cac so da nhap la: " << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << "\n";
	}
	//cach 3
	{
		int a[4];
		cout << "Cach 3\nNhap lan luot 4 so nguyen: ";
		int i;
		do {
			i = 0;
			cin >> a[0];
			++i;
		} while (i < 4);
		cout << "Cac so da nhap la: ";
		do {
			int i = 0;
			cout << a[i];
			++i;
		} while (i < 4);
	}
	//cach 4
	{
		int a[4] = { 0 };
		cout << "Cach 4\nNhap lan luot 4 so nguyen: ";
		for (int i = 0; i < 4; ++i)
			cin >> a[i];
		cout << "Cac so da nhap la: ";
		for (int i = 0; i < 4; ++i)
			cout << a[i] << " ";
		cout << endl;
	}
	//cach 5
	{
		int a[4] = { 0 };
		for (int i = 0; i < 4; ++i) {
			cout << "Moi ban nhap gia tri cho so thu " << i + 1 << " : ";
				cin >> a[i];
				cout << "So ban vua nhap la: " << a[i] << "\n\n";
		}
	}
	//cach 6
	{
		int a[4] = { 0 };
		getArrayNumber(a, 4);
		printArrayNumber(a, 4);
	}
	//cach 7
	{
		int a[4] = { 0 };
		const char* fipath = "./input.txt";
		const char* fopath = "./output.txt";
		getArrayFromFile(a, 4, fipath);
		printArrayToFile(a, 4, fopath);
		printArrayNumber(a, 4);
	}
	cout << "\n";
	system("pause");
	return 0;
}