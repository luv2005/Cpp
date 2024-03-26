#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[3][3], b[3][3];
    cout<<"enter  rows and columns\n3 3"<<endl;
    cout << "Enter elements" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    }
    cout << "transpose of matrix" << endl;
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
            cout << a[j][i] << " ";
        cout << endl;
    }
    return 0;
}
