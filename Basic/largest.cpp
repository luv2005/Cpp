#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 32;
    int b = 5;
    int c = 10;
    if (a > b)
        cout << "A is greater than B";
    else if (b > c)
        cout << "B is greater than C";
    else
        cout << "C is greater than A and B";
    return 0;
}
