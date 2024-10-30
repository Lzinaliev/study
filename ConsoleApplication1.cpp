/*
#include <iostream>
using namespace std;

int main() {
    double x1_min, y1_min, x1_max, y1_max, x2_min, y2_min, x2_max, y2_max;
    //первый прямоугольник 
    cin >> x1_min >> y1_min >> x1_max >> y1_max;
    // второй прямоугольник
    cin >> x2_min >> y2_min >> x2_max >> y2_max;

    //считаем пересечение
    double x_overlap = max(0.0, min(x1_max, x2_max) - max(x1_min, x2_min));
    double y_overlap = max(0.0, min(y1_max, y2_max) - max(y1_min, y2_min));
    double area = x_overlap * y_overlap;

    if (area > 0) {
        cout << area;
    }
    else {
        cout << "intersection area is 0";
    }

    return 0;
}
*/
#include <iostream>
#include <cmath>
using namespace std;

// расстояния до полукруга
double dp(double x, double y, double R) {
    // Проверка, находится ли точка внутри полукруга
    if (x >= -R && x <= R && y >= 0 && sqrt(x * x + y * y) <= R) {
        return 0.0;  // Точка внутри или на границе полукруга
    }

    // Если точка снаружи, вычисляем расстояние до границы
    double dta = fabs(sqrt(x * x + y * y) - R);  // До дуги
    double dte = y;  // По вертикали

    // Если точка левее или правее границ полукруга
    if (x < -R) {
        dte = sqrt((x + R) * (x + R) + y * y);  // До левой границы
    }
    else if (x > R) {
        dte = sqrt((x - R) * (x - R) + y * y);  // До правой границы
    }

    // Возвращаем минимальное расстояние до дуги или вертикальной границы
    return min(dta, dte);
}

int main() {
    double x, y, R;

    cin >> x >> y >> R;

    double distance = dp(x, y, R);
    cout << fabs(distance) << endl;

    return 0;
}

