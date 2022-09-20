#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        complex(void);//constructor declaration;
        void print(){
            cout<<"your complex number is "<<a<<"+i"<<b<<endl;
        }

};


complex::complex(void){//this is a default cons becoz it take no values
    a=0;
    b=0;
}
int main(){
    complex c;
    c.print();

    return 0;
}
//characteristics of cons
/*
1.it should declare in public area
2.they are automatically invoked whenever the obj is created
3.they cannot return values and do not have return types
4.it can have default arguments
5.we cannot refer to there adress
*/
