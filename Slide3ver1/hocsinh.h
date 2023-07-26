#ifndef _HS_H_
#define _HS_H_

#include <iostream>
using namespace std;

class HocSinh {
private:
	char *mahs;
	char *hoten;
	int dtoan;
	int dvan;
public:
	HocSinh();
	HocSinh(const HocSinh &hs);
	~HocSinh();
	static void printHocSinh(const HocSinh &hs);
	static void inputHocSinh(HocSinh &hs);
};


#endif