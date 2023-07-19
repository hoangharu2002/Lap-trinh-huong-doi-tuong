#include <iostream>
using namespace std;

int getGCD_method1(int a, int b) {
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

//lan 37
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

int main() {
    int a = 2, b = 4;
    cout << "GDC: " << getGCD(a, b) << "\n";
    system("pause");
    return 0;
}