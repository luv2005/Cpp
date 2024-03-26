#include<iostream>
using namespace std;
class binary {
    string s;
    public:
    void read(void);
    void check(void);
    void ones(void);

};
void binary::read(void){
    cout<<"Enter a binary number: ";
    cin>>s;
}
void binary::check(void){
    for(int i=0;i<s.length();i++){
        if(s[i]!='0' && s[i]!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
    cout<<"Correct binary format"<<endl;
}
void binary::ones(void){
    string a=s;
    for (int i = 0; i <a.length(); i++)
    {
        if (a[i]=='0')
        {
            a[i]='1';
        }
        else if (a[i]=='1')
        {
            a[i]='0';
        }
        
    }
    cout<<"ones compliment of "<<s<<" is "<<a;
    
}
int main()
{
    binary b;
    b.read();
    b.check();
    b.ones();
return 0;
}