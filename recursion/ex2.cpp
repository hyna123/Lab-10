#include <iostream>
using namespace std;

// Recursive function to compute the sum of array elements
int sum(int a[], int size) {
    if (size == 0) // Base case: If size is 0, the sum is 0
        return 0;
    return a[size - 1] + sum(a, size - 1); // Add the last element to the sum of the rest
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = sum(arr, size);
    cout << "Sum of elements: " << result << endl; // Should print 10

    return 0;
}
