#include<iostream>
using namespace std;
class rectangle{
    private:
    float length;
    float breadth;
    public:
    void setLength(float l){
        length = l;
    }
    void setBreadth(float b){
        breadth = b;
    }
    float getArea(){
        return length*breadth;
    }
    float getPerimeter(){
        return 2*(length+breadth);
    }
};
int main(){
    rectangle r;
    float x,y;
    cout<<"Enter length: ";
    cin>>x;
    cout<<"Enter breadth: ";
    cin>>y;
    r.setLength(x);
    r.setBreadth(y);
    cout<<"Area: "<<r.getArea()<<endl;
    cout<<"Perimeter: "<<r.getPerimeter()<<endl;
    return 0;
}