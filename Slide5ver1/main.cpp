#include <iostream>
#include "dathuc.h"
using namespace std;

int main() {
	//
	DaThuc f, f1;
	cout << "Nhap da thuc 1:\n";
	cin >> f;
	cout << "Nhap da thuc 2:\n";
	cin >> f1;
	cout << "f(x) = " << f << endl;
	cout << "Gia tri cua da thuc tai x = 2 la: " << f.getValueAtX(2) << endl;
	cout << "f + f1 = " << f + f1 << endl;
	cout << "f - f1 = " << f - f1 << endl;
	system("pause");
	return 0;
}