#include<iostream>
using namespace std;
class bank{
    private:
    long int acc_no=99999;
    long int balance=10000;
    public:
    long int getbalance(){
        return balance;
    }
};
int main(int argc, char const *argv[])
{
    bank b;
    int x;
    string c;
    cout<<"do you want to deposit or withdraw:";
    cin>>c;
    if (c=="deposit")
    {
        cout<<"Enter amount of deposit value: ";
        cin>>x;
        cout<<"your balance is: "<<b.getbalance()+x;
    }
    else if (c=="withdraw")
    {
        cout<<"Enter amount of withdraw value: ";
        cin>>x;
        cout<<"your balance is: "<<b.getbalance()-x;
    }
    return 0;
} 