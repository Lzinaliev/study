/*include <iostream>
#include <cmath>

using namespace std;

double calculate(double x, double epsilon) {
    double sum = 0.0;
    double term = x;  // начальный член ряда
    int n = 1;

    while (fabs(term) >= epsilon) {
        sum += term;
        n++;
        term *= -x * x / (3 * (2 * n - 2) * (2 * n - 1));  // рассчитываем следующий член ряда
    }

    return sum;
}

int main() {
    setlocale(LC_ALL, "RU");    
    double x, epsilon;
    cout << "Введите значение x: ";
    cin >> x;
    cout << "Введите значение точности epsilon: ";
    cin >> epsilon;

    double result = calculate(x, epsilon);
    cout << "Сумма ряда с заданной точностью: " << result << endl;

    return 0;
}
*/
#include <iostream>
using namespace std;



int main() {
    int arr[] = { 0,3,1,5,6,7 };
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 1; i < size; i++) {
        if (arr[i] <= arr[i-1]) {
            cout << "false";
            return 0;
        }
        
        
    }
    cout << "true" << endl;

}
