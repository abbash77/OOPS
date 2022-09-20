#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        complex(){
            a=0;
            b=0;
        }
        complex(int x,int y){
            a=x;
            b=y;
        }
        complex(int x){//jo cons match krega wahi run krega ye cons b ke liye run krega 
            a=x;
            b=0;
        }
         void print(){
            cout<<"your complex number is "<<a<<"+i"<<b<<endl;
        }

};

int main(){
    complex a(3,4);
    a.print();
    complex b(5);
    b.print();
    complex c;
    c.print();
    return 0;
}