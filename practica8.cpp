#include <iostream>
using namespace std;

int main() {
    int arr[] = { 4, 2, 6, 8, 10 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // Перебираем каждый элемент как потенциальный делитель
    for (int i = 0; i < size; i++) {
        bool isDivisor = true;

        // Проверяем, делит ли текущий элемент все остальные
        for (int j = 0; j < size; j++) {
            if (i != j && arr[j] % arr[i] != 0) {
                isDivisor = false;
                break;
            }
        }

        // Если элемент является делителем, выводим его и завершаем
        if (isDivisor) {
            cout << "Element dividing all others: " << arr[i] << endl;
            return 0;
        }
    }

    // Если ни один элемент не делит все остальные
    cout << "No element divides all others." << endl;

    return 0;
}
