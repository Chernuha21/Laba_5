#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10; // ����� ������
    int arr[SIZE]; // ���������� ������
    int negativeCount = 0; // ˳������� �䒺���� ��������

    // �������� �������� ������
    cout << "Write " << SIZE << " numbers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    // ϳ�������� �䒺���� ��������
    for (int i = 0; i < SIZE; ++i) {
        if (arr[i] < 0) {
            negativeCount++;
        }
    }

    // ��������� ����������
    cout << "Numbers less then 0: " << negativeCount << endl;

    return 0;
}
