#pragma once
#ifndef _day_H_
#define _day_H_

#include <iostream>
using namespace std;

typedef struct Date {
	unsigned int day, month, year;
};

bool checkLeapYear(Date today);
bool checkMonth(Date today);
bool checkDay(Date today);
bool checkToday(Date today);
Date getNextday(Date today);
istream& operator>>(istream& cin, Date& today);
ostream& operator<<(ostream& cout, Date today);

#endif