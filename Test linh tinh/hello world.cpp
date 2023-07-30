#include <iostream>
using namespace std;

bool checkPrimeNumber(int x) {
    if (x == 0 || x == 1)
        return false;
    for (int i = 2; i * i <= x; ++i)
        if (x % i == 0)
            return false;
    return true;
}

//lan 38
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
    /*int a = 3, b = 6;
    cout << "Is prime number: " << boolalpha << checkPrimeNumber(a) << "\n";*/

    char helo[8] = "";
    cin.get(helo, 8);
    std::cout << helo;
  
    
    system("pause");
    return 0;
}