
/*
#include <iostream>
#include <string>
using namespace std;



string intToRoman(int num) {
    string roman = "";
    while (num >= 1000) { roman += "M"; num -= 1000; }
    if (num >= 900) { roman += "CM"; num -= 900; }
    if (num >= 500) { roman += "D"; num -= 500; }
    if (num >= 400) { roman += "CD"; num -= 400; }
    while (num >= 100) { roman += "C"; num -= 100; }
    if (num >= 90) { roman += "XC"; num -= 90; }
    if (num >= 50) { roman += "L"; num -= 50; }
    if (num >= 40) { roman += "XL"; num -= 40; }
    while (num >= 10) { roman += "X"; num -= 10; }
    if (num >= 9) { roman += "IX"; num -= 9; }
    if (num >= 5) { roman += "V"; num -= 5; }
    if (num >= 4) { roman += "IV"; num -= 4; }
    while (num >= 1) { roman += "I"; num -= 1; }
    return roman;
}

int main() {
    setlocale(LC_ALL, "RU");
    int x;
    cout << "Введите число: ";
    cin >> x;

    if (x <= 0 || x > 3999) {
        cout << "Ошибка: число должно быть в диапазоне от 1 до 3999." << endl;
    }
    else {
        cout << "Римская запись: " << intToRoman(x) << endl;
    }

    return 0;
}
*/

//task3
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите размер массивов: ";
    cin >> n;

    int a[n], b[n];
    cout << "Введите элементы первого массива: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Введите элементы второго массива: ";
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    bool isMirror = true;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[n - 1 - i]) {
            isMirror = false;
            break;
        }
    }

    if (isMirror) {
        cout << "Массивы являются зеркальными копиями." << endl;
    }
    else {
        cout << "Массивы не являются зеркальными копиями." << endl;
    }

    return 0;
}

