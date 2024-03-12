#include<iostream>
using namespace std;
int main()
{
    int sum=0,n;
    while (true)
    {
        cin>>n;
        if (n==0)
        break;
        sum+=n;
    }
    cout<<sum;
    return 0;
}