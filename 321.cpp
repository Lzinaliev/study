#include <iostream>
#include <cmath>

using namespace std;

bool area(double x, double y) {
    if (x >= 0 && y >= 0) {
        if (pow(x, 2) + pow(y, 2) <= 4) {
            return true;
        }
    }

    if (x <= 0 && y <= 0 && x >= -2 && y >= -2 && y >= -x - 2) {
        return true;
    }

    return false;
}

int main() {
    setlocale(LC_ALL, "Russian");
    double x, y;
    cin >> x >> y;
    if (area(x, y)) {
        cout << "Точка входит в область." << endl;
    }
    else {
        cout << "Точка не входит в область." << endl;
    }

    return 0;
}