#include "dathuc.h" 

double& DaThuc::operator[](int i) {
	return this->heso[i];
}

void DaThuc::getInputHeso(DaThuc& f) {
	for (int i = f.bac; i >= 0; --i) {
		cout << "Nhap he so bac " << i << " cua da thuc: ";
		cin >> f[i];
	}
}

istream& operator>>(istream& cin, DaThuc& f) {
	cout << "Nhap bac cua da thuc: ";
	cin >> f.bac;
	delete[]f.heso;
	f.heso = new double[f.bac] {0};
	DaThuc::getInputHeso(f);
	return cin;
}

ostream& operator<<(ostream& cout, const DaThuc& f) {
	for (int i = 0; i <= f.bac; ++i)
		cout << f.heso[i] << "x^" << i << " ";
	return cout;
}

DaThuc::DaThuc(int bac) {
	this->bac = bac;
	this->heso = new double[bac];
}

DaThuc::DaThuc(int bac, double* a) {
	this->bac = bac;
	this->heso = new double[this->bac];
	copy(a, a + this->bac, this->heso);
}

DaThuc::DaThuc(const DaThuc& f) {
	this->bac = f.bac;
	this->heso = new double[f.bac];
	copy(f.heso, f.heso + f.bac, this->heso);
}

double DaThuc::getValueAtX(double x) {
	double sum = 0;
	for (int i = 0; i <= this->bac; ++i) {
		sum += (*this)[i] * pow(x, i);
	}
	return sum;
}

DaThuc DaThuc::operator+(const DaThuc& f) {
	DaThuc sum;
	sum.bac = (this->bac + f.bac + abs(this->bac - f.bac)) / 2;
	sum.heso = new double[sum.bac];
	for (int i = 0; i <= sum.bac; ++i)
		sum[i] = (*this)[i] + f.heso[i];
	return sum;
}

DaThuc DaThuc::operator-(const DaThuc& f) {
	DaThuc differ;
	differ.bac = (this->bac + f.bac + abs(this->bac - f.bac)) / 2;
	differ.heso = new double[differ.bac];
	for (int i = 0; i <= differ.bac; ++i)
		differ[i] = (*this)[i] - f.heso[i];
	return differ;
}