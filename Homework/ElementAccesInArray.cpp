#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[]={1,2,3,7,3,8,55,3,2};
    int *p;
    p=a;
    int n=sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        cout<<*(p+i)<<" ";
    }
    return 0;
}