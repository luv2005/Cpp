#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if (a == b) {
        cout<<3*(a+b);
    }
    else
    {
        cout<<a+b;
    }
    return 0;
}
