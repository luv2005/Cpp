#include <iostream>
using namespace std;
int main()
{
    char c;
    cin >> c;
    if (c >= 33 && c <= 47)
        cout << "special";
    if (c == 64)
        cout << "special";
    else if (c >= 48 && c <= 57)
        cout << "numbers";
    else if (c >= 65 && c <= 90)
        cout << "A to Z";
    else if (c >= 97 && c <= 122)
        cout << "a to z";
    return 0;
}