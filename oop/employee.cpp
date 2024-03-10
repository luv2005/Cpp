#include<iostream>
using namespace std;
class employee
{
    private:
    int id=777;
    string name="vansh";
    float salary;
    public:
    int setsalary(float s)
    {
        salary=s;
    }
    int getsalary()
    {
        return salary;
    }
};
int main()
{
    employee e1;
    string performance;
    cout<<"Enter the performance of the employee: ";
    cin>>performance;
    if (performance=="good")
    {
        e1.setsalary(100000);
    }
    else if (performance=="average")
    {
        e1.setsalary(50000);
    }
    else if (performance=="bad")
    {
        e1.setsalary(10000);
    }
    cout<<e1.getsalary();
    return 0;
}
