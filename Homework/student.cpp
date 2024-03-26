#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int roll_no;
    void grades(int marks)
    {
        if (marks >= 90)
            cout << "A" << endl;
        else if (marks >= 80)
            cout << "B" << endl;
        else if (marks >= 70)
            cout << "C" << endl;
        else if (marks >= 60)
            cout << "D" << endl;
        else
            cout << "F" << endl;
    }
};
int main()
{
    student s;
    int n;
    cout << "enter the marks";
    cin >> n;
    s.grades(n);
    return 0;
}