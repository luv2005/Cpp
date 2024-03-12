#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float unit,bill,surcharges=0;
    cout<<"Enter the unit: ";
    cin>>unit;
    if (unit<=199)
        bill=unit*1.20;
    else if (unit>=200 && unit<400)
        bill=unit*1.50;
    else if (unit>=400 && unit<600)
        bill=unit*1.80;
    else
        bill=unit*2.00;
    if (bill>=400)
        surcharges=(bill*15)/100;
    cout<<"customer id: 1001"<<endl<<"customer name: vansh"<<endl<<"unit consumed: "<<unit<<endl<<"amount charges: "<<bill<<endl<<"surcharge amount: "<<surcharges<<endl<<"net amount paid by the customer: "<<bill+surcharges; 
    return 0;
}
