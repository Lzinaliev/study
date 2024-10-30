/*#include <iostream>
using namespace std;

/*int main() {
    int x, original, i, count = 0;
    cin >> x;
    original = x;

    while (x > 0) {
        i = x % 10;
        if (i != 0 && original % i == 0) {
            count += 1;
        }
        x /= 10;
    }

    if (count > 0) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}

*/
/*int main() {
    int chislo, chislo_zap;
    cin >> chislo;
    int k = 9;
    int a = 0;
    while (k != -1) {
        chislo_zap = chislo;
        while (chislo_zap > 0) {
            if (chislo_zap % 10 == k) {
                a += k;
                a *= 10;
            }
            chislo_zap /= 10;
        }
        k -= 1;
    }
    a /= 10;
    cout << a;
} 
*/
#include <iostream>
#include <cmath>

using namespace std;

const int MAX_N = 100; 
const int MAX_M = 100; 

int main() {
    setlocale(LC_ALL, "RU");
    int n, m, q, X[MAX_N], Y[MAX_M];

    cout << "Введите размер массива X: ";
    cin >> n;
    cout << "Введите размер массива Y: ";
    cin >> m;
    cout << "Введите значение q: ";
    cin >> q;

    
    

    // Ввод элементов массива X
    cout << "Введите элементы массива X: ";
    for (int i = 0; i < n; i++) {
        cin >> X[i];
    }

    // Ввод элементов массива Y
    cout << "Введите элементы массива Y: ";
    for (int i = 0; i < m; i++) {
        cin >> Y[i];
    }

    int naibolsh_i = 0, naibolsh_j = 0, naibolsh_sum = X[0] + Y[0];

    // Перебираем все элементы
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int sum = X[i] + Y[j]; 
            //если сумма эл-тов - заданное число <= наибольшей суммы - заданное число
            if (abs(sum - q) <= abs(naibolsh_sum - q)) {
                naibolsh_sum = sum;
                naibolsh_i = i;
                naibolsh_j = j;
            }
        }
    }

    // Выводим индексы
    cout << "Индексы: i = " << naibolsh_i << ", j = " << naibolsh_j << endl;

    return 0;
}

