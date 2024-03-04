#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    int n;
    int x = 0, y = 1;
    int sum=0;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: " << x << " " << y << " ";
    for (int i = 3; i <= n; ++i) {
        sum = x + y;
        cout << sum << " ";
        x = y;
        y = sum;
    }
    return 0;
}