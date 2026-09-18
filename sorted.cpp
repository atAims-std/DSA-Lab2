#include <iostream>
#include <cassert>
bool isSorted(const int* arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        if (*(arr + i) > *(arr + i + 1)) return false;
    }
    return true;
}
void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
}
int main() {
    testSortedArray();
    return 0;
}