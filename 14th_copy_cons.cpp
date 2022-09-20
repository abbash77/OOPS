#include<iostream>
using namespace std;

class number{
    int a;
    public:
        number(){
            a=0;
        };//default cons
        number(int num){
            a=num;
        }
        number(number &obj){      //copy cons called
            a=obj.a;
            cout<<"copy cons called"<<endl;//and it is redundant likhne ki zarurat nhi hh
        }//agar copy cons yaha likha hoga to chalega aur nhi bhi hoga to bhi chalega
        void display(){
            cout<<"the number for this obj is "<<a<<endl;
        }
};

int main(){

    number  x,y,z(45),z2;
    z.display();

    //z1 should exactly resemble z or x or y
    number z1(x);////x aur z1 same ho jayega
    z1.display();
    z2=z;//copy cons not invoked
    number z3=z;//copy cons invoked
    return 0;
}