#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

    int array[10];

    cout << "Введите значения для массива через пробел: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
    
    cout << "Результат сортировки: " << endl;
    for (int i = 0; i < 10; i++)
        cout << array[i] << " ";


	return 0;
}















