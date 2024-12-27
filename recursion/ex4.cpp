#include <iostream>
using namespace std;

// Recursive function to compute binomial coefficients
int binomialCoefficient(int n, int m) {
    // Base cases
    if (m == 0 || n == m)
        return 1;

    // Recursive case
    return binomialCoefficient(n - 1, m - 1) + binomialCoefficient(n - 1, m);
}

int main() {
    int n, m;

    // Input values for n and m
    cout << "Enter values for n and m: ";
    cin >> n >> m;

    // Validate input
    if (m > n || n < 0 || m < 0) {
        cout << "Invalid input. Ensure that 0 <= m <= n." << endl;
        return 1;
    }

    // Compute and display the binomial coefficient
    cout << "Binomial Coefficient C(" << n << ", " << m << ") = " 
         << binomialCoefficient(n, m) << endl;

    return 0;
}
