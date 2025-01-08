#include <bits/stdc++.h>
using namespace std;

int getSum(int a, int b) {
    while (b != 0) {
        int carry = a & b; // Calculate carry bits
        a = a ^ b;         // Add without carrying
        b = carry << 1;    // Shift carry to the left
    }
    return a;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    int result = getSum(a, b);

    cout << "The sum of " << a << " and " << b << " is: " << result << endl;

    return 0;
}
