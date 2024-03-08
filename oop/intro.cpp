#include<iostream>
using namespace std;
class hero{
    public:
    string name;
    int health;
    int attack;
    int defense;
    int speed;
    private:
    char grade;
    public:
    char getGrade(){
        return grade;
    }
    void setGrade(char g){
        grade = g;
    }
};
int main(){
    hero h;
    h.name = "Axe";
    h.health = 100;
    h.attack = 50;
    h.defense = 20;
    h.speed = 30;
    h.setGrade('A');
    cout<<"Name: "<<h.name<<endl;
    cout<<"Health: "<<h.health<<endl;
    cout<<"Attack: "<<h.attack<<endl;
    cout<<"Defense: "<<h.defense<<endl;
    cout<<"Speed: "<<h.speed<<endl;
    cout<<"Grade: "<<h.getGrade()<<endl;
    return 0;
}