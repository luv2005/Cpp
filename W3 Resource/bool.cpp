#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    bool x;
    cout << "Enter two numbers: ";
    cin >> a;
    if (abs(a-100)<=10 ||abs(a-200)<=10)
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
