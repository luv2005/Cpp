#include <iostream>
using namespace std;
class arraykidukaan
{
    int itemid[100];
    int itemprice[100];
    int count = 0;

public:
    void setdata(void);
    void getdata(void);
};
void arraykidukaan::setdata(void)
{
    cout << "enter the id of item no." << count + 1 << endl;
    cin >> itemid[count];
    cout << "enter the price of item no." << count + 1 << endl;
    cin >> itemprice[count];
    count++;
}
void arraykidukaan::getdata(void)
{
    for (int i = 0; i < count; i++)
    {
        cout <<"Id = "<<itemid[i] << endl;
        cout <<"Price = "<<itemprice[i] << endl;
    }
}
int main()
{
    arraykidukaan b;
    int n;
    cout<<"enter how many item do you want to enter";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        b.setdata();
    }
    b.getdata();
    return 0;
}