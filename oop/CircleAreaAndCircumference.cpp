#include<iostream>
using namespace std;
float pi = 3.14;
class circle{
    private:
    float radius;
    public:
    void setRadius(float r){
        radius = r;
    }
    float getArea(){
        return pi*radius*radius;
    }
    float getCircumference(){
        return 2*pi*radius;
    }
};
int main(){
    circle c;
    float x;
    cout<<"Enter radius: ";
    cin>>x;
    c.setRadius(x);
    cout<<"Area: "<<c.getArea()<<endl;
    cout<<"Circumference: "<<c.getCircumference()<<endl;
    return 0;
}