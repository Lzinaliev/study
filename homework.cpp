/*
#include <iostream>
using namespace std;

int cm(int N, int X, int Y) {
    return (N / X) + (N / Y) - (N / (X * Y));
}

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    cout << cm(N - 1, X, Y) << endl;

    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cin >> a >> b >> c;

    // �������� �� ������������� ������������ (����������� ������������)
    if (a + b > c && a + c > b && b + c > a) {
        int a2 = a * a, b2 = b * b, c2 = c * c;

        // ����������� ������� ��������
        if (a2 + b2 == c2 || a2 + c2 == b2 || b2 + c2 == a2)
            cout << "����������� �������������" << endl;
        //c���� ��������� ���� ������ ������, ��� ������� ������� �������
        else if (a2 + b2 > c2 && a2 + c2 > b2 && b2 + c2 > a2)
            cout << "����������� �������������" << endl;
        else
            cout << "����������� ������������" << endl;
    }
    else {
        cout << "���������� ��������� ����������� � ������ ���������." << endl;
    }

    return 0;
}
*/
/*#include <iostream>
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
        cout << "����� ������ � �������." << endl;
    }
    else {
        cout << "����� �� ������ � �������." << endl;
    }

    return 0;
}
*/
/*#include <iostream>
#include <cmath>
using namespace std;

double main() {
    double a, r;
    cin >> a > r;
    if (r <= sqrt(a) / 2){
        
        return 0;
    }


}
*/
#include <iostream>
using namespace std;
int main() {
    
}
