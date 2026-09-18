#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int* salPtr = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter Salary for employee " << (i + 1) << ": ";
        cin >> *(salPtr + i);
    }

    for (int i = 0; i < size; i++) {
        *(salPtr + i) = *(salPtr + i) + *(salPtr + i) / (i + 1);
    }

    cout << "\nUpdated Salaries: ";
    for (int i = 0; i < size; i++) {
        cout << *(salPtr + i) << " ";
    }
    cout << endl;
 
    delete[] salPtr;
    salPtr = nullptr;

    return 0;
}