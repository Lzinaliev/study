#include <iostream>
#include <cmath> 
using namespace std;

int main() { 
    
    int n, originalN, countN = 0, sum = 0;

    cin >> n;

    originalN = n; 

    // Считаем количество цифр в числе
    while (n > 0) {
        countN += 1;
        n /= 10;
    }

    n = originalN;

    // Считаем сумму степеней цифр
    while (n > 0) {
        sum += pow(n % 10, countN);
        n /= 10;
    }

    // Проверяем, является ли число Армстронга
    if (sum == originalN) {
        cout << "num Armstrong" << endl;
    }
    else {
        cout << "not num Armstrong" << endl;
    }

    return 0;
}
