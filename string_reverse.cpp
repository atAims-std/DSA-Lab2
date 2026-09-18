#include <iostream>
#include <cstring>
using namespace std;
int main() {
    const int capacity = 100;
    // Dynamically allocating memory on the heap
    char* str = new char[capacity];
    cout << "Enter a string to reverse: ";
    cin.getline(str, capacity);
    int length = strlen(str);
    char* start = str;
    char* end = str + length - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    cout << "Reversed string: " << str << endl;
    // Deallocating dynamic memor
    delete[] str;
    str = nullptr;
    return 0;
}