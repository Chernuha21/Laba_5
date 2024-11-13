#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10; // Розмір масиву
    int arr[SIZE]; // Оголошення масиву
    int negativeCount = 0; // Лічильник від’ємних елементів

    // Введення елементів масиву
    cout << "Write " << SIZE << " numbers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    // Підрахунок від’ємних елементів
    for (int i = 0; i < SIZE; ++i) {
        if (arr[i] < 0) {
            negativeCount++;
        }
    }

    // Виведення результату
    cout << "Numbers less then 0: " << negativeCount << endl;

    return 0;
}
