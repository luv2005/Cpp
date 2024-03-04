#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char op;
    int a,b;
    cout<<"enter the value of operants:";
    cin>>a;
    cout<<"Enter any operator:"<<endl;
    cin>>op;
    cout<<"enter the value of operants:";
    cin>>b;
    switch (op)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
    
    case '*':
        cout<<a*b;
    
    case '/':
        cout<<a/b;
    
    default:
        cout<<"invalid";
        break;
    }
    return 0;
}