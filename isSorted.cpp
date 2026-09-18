#include <iostream>
#include <cassert>   // for assert()
using namespace std;

// just the prototype for now, writing tests before the actual function (TDD)
bool isSorted(const int* arr, const int size);

// test 1 - normal sorted array
void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    bool result = isSorted(arr, 5);
    assert(result == true); // should be sorted
    cout << "testSortedArray passed\n";
}

// test 2 - unsorted array
void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6}; // 4 then 3 breaks the order
    bool result = isSorted(arr, 5);
    assert(result == false);
    cout << "testUnsortedArray passed\n";
}

// test 3 - has duplicate values, should still count as sorted
void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};
    bool result = isSorted(arr, 5);
    assert(result == true);
    cout << "testDuplicateValues passed\n";
}

// test 4 - only one element in array
void testSingleElement() {
    int arr[] = {7};
    bool result = isSorted(arr, 1);
    assert(result == true); // nothing to compare so its sorted by default
    cout << "testSingleElement passed\n";
}

// test 5 - array in descending order, this should fail the check
void testDescendingArray() {
    int arr[] = {9, 7, 5, 3, 1};
    bool result = isSorted(arr, 5);
    assert(result == false);
    cout << "testDescendingArray passed\n";
}

// test 6 - negative numbers included
void testNegativeValues() {
    int arr[] = {-5, -3, -1, 0, 2};
    bool result = isSorted(arr, 5);
    assert(result == true);
    cout << "testNegativeValues passed\n";
}

// extra test 1 - empty array
void testEmptyArray() {
    int arr[] = {};
    bool result = isSorted(arr, 0);
    assert(result == true); // empty array, nothing to check so true
    cout << "testEmptyArray passed\n";
}

// extra test 2 - all values same
void testAllEqual() {
    int arr[] = {4, 4, 4, 4};
    bool result = isSorted(arr, 4);
    assert(result == true);
    cout << "testAllEqual passed\n";
}

int main() {
    // running all the tests one by one
    // if isSorted() is wrong it'll crash on assert somewhere below
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testEmptyArray();
    testAllEqual();

    cout << "\nAll tests passed!\n"; // only reaches here if everything above passed
    return 0;
}

// writing the actual function now, after the tests
bool isSorted(const int* arr, const int size) {
    return false; // placeholder, not implemented yet
    /*
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
    */
}