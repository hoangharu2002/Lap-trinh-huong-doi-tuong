#include "date.h"

bool checkLeapYear(Date today) {
	if (today.year % 4 == 0 && today.year % 100 != 0)
		return true;
	else if (today.year % 400 == 0)
		return true;
	return false;
}

bool checkMonth(Date today) {
	if (today.month > 12)
		return false;
	return true;
}

bool checkDay(Date today) {
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

bool checkToday(Date today) {
	if (checkMonth(today)) {
		if (checkDay(today))
			return true;
		cout << "Ngay khong hop le\n";
		return false;
	}
	cout << "Thang khong hop le\n";
	return false;
}

Date getNextday(Date today) {
	Date nextday = today;
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

istream& operator>>(istream& cin, Date& today) {
	cin >> today.day >> today.month >> today.year;
	return cin;
}

ostream& operator<<(ostream& cout, Date today) {
	cout << today.day << "/" << today.month << "/" << today.year;
	return cout;
}