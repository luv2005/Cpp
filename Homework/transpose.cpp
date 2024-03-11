#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[3][3], b[3][3];
    cout << "Enter the elements of the matrix" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    cout << "The transpose of the matrix is" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)

            b[i][j] = a[j][i];
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }
    return 0;
}
