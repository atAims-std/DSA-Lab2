#include <iostream>
#include <cassert>
bool isSorted(const int* arr, const int size) {
    return false; // Stub implementation
}
void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
}
int main() {
    testSortedArray();
    return 0;
}