#include<iostream>
using namespace std;

template <class T1=int,class T2=float>
class harry{
    public:
        T1 a;
        T2 b;
        harry(T1 x,T2 y){
            a=x;
            b=y;
        }
        void display(){
            cout<<a<<endl<<b;
        }
};

int main(){
    // harry<char,int> obj('c',4);
    // harry<> obj(4,4.5);
    harry<char> obj('c',4.7);
    obj.display();
    return 0;
}