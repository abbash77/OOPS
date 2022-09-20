#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        complex(int x,int y){
            a=x;
            b=y;
        }
        void print(){
            cout<<"your complex number is "<<a<<"+i"<<b<<endl;
        }
};
int main(){
    // implicit call
    complex a(3,4);
    // explicit call;
    complex b=complex(6,7);
    a.print();
    b.print();

    return 0;
}