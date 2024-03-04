#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b;
    bool x;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a == 30 || b == 30 || a + b == 30)
    {
        x = true;
        cout << x;
    }
    else
    {
        x = false;
        cout << x;
    }
}
