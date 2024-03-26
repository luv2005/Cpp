#include <iostream>
using namespace std;

int main() {
    double radius;
    cout << "Enter the radius\n";
    cin >> radius;
    double area = 3.14159 * radius * radius;
    cout << "The area of the circle is\n" << area << endl;
    return 0;
}