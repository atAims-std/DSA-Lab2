#include <iostream>
#include <cassert>
using namespace std;
bool isSorted(const int* arr, const int size) {
   if (arr == nullptr || size <= 1) {
        return true;
    }
    for (int i = 0; i < size - 1; i++) {
        if (*(arr + i) > *(arr + i + 1)) {
            return false;
        }
    }
    return true;
}

void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
    cout << "Passed: testSortedArray" << endl;
}

void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6};
    assert(isSorted(arr, 5) == false);
    cout << "Passed: testUnsortedArray" << endl;
}
void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};
    assert(isSorted(arr, 5) == true);
    cout << "Passed: testDuplicateValues" << endl;
}

void testSingleElement() {
    int arr[] = {42};
    assert(isSorted(arr, 1) == true);
    cout << "Passed: testSingleElement" << endl;
}

void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
    cout << "Passed: testDescendingArray" << endl;
}

void testNegativeValues() {
    int arr[] = {-10, -5, -2, 0, 3};
    assert(isSorted(arr, 5) == true);
    cout << "Passed: testNegativeValues" << endl;
}

void testAllEqualElements() {
    int arr[] = {7, 7, 7, 7};
    assert(isSorted(arr, 4) == true);
    cout << "Passed: testAllEqualElements" << endl;
}

void testEmptyOrInvalidSize() {
    int arr[] = {1, 2, 3};
    assert(isSorted(arr, 0) == true);   
    assert(isSorted(nullptr, 0) == true); 
    cout << "Passed: testEmptyOrInvalidSize" << endl;
}

int main() {
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testAllEqualElements();
    testEmptyOrInvalidSize();
    return 0;
}