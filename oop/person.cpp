#include<iostream>
using namespace std;
class person{
    private:
    string name;
    int age;
    string country;
    public:
    void setDetails(string n, int a, string c){
        name = n;
        age = a;
        country = c;
    }
    void getDetails(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<country<<endl;
    }
};
int main(){
    person p;
    string name, country;
    int age;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter age: ";
    cin>>age;
    cout<<"Enter country: ";
    cin>>country;
    p.setDetails(name, age, country);
    p.getDetails();
    return 0;
}