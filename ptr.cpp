#include <iostream>
using namespace std;

// Function to analyze address and value of a pointer
void analyze_pointer(int *ptr) {
    if (ptr == nullptr) {
        cout << "Pointer is null." << endl;
        return;
    }
    cout << "Memory Address: " << ptr << endl;
    cout << "Pointed Value:  " << *ptr << endl;
}

int main() {
    //  Stack allocation
    int iValue = 42;
    analyze_pointer(&iValue);

    // Heap allocation
    int *heapPtr = new int; 
    *heapPtr = 99;        
    analyze_pointer(heapPtr);
    delete heapPtr;
    heapPtr = nullptr;

    return 0;
}