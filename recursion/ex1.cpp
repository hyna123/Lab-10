#include <iostream>
using namespace std;

// Recursive implementation of Ackermann's function
int Ackermann(int m, int n) {
    if (m == 0)
        return n + 1;
    else if (m > 0 && n == 0)
        return Ackermann(m - 1, 1);
    else
        return Ackermann(m - 1, Ackermann(m, n - 1));
}

int main() {
    // Test the function with Ackermann(2, 2)
    int m = 2, n = 2;
    cout << "Ackermann(" << m << ", " << n << ") = " << Ackermann(m, n) << endl;
    return 0;
}
