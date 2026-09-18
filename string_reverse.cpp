#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int len;
    cout << "Enter the length of the string: ";
    cin >> len;
    cin.ignore(); // clear the leftover newline in the input buffer

    // Dynamically allocate memory for the string (+1 for the null terminator)
    char *str = new char[len + 1];

    cout << "Enter a string of length " << len << ": ";
    cin.getline(str, len + 1);

    // Reverse the string in place using two pointers/indices
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    cout << "Reversed string: " << str << endl;

    // Free the dynamically allocated memory
    delete[] str;

    return 0;
}