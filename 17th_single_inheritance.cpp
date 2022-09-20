#include<iostream>
using namespace std;

class base{
    int data1;//private//cannot inheritable
    public:
        int data2;
        void setdata();
        int getdata1();
        int getdata2();
};


void base::setdata(){
    data1=10;
    data2=20;
}
int base::getdata1(){
    return data1;
}
int base::getdata2(){
    return data2;
}


class derive:public base{//agar private hota to directly setdata call nhi kr skte
    int data3;
    public:
        void process();
        void display();
};


void derive::process(){
    data3=data2*getdata1();
}
void derive::display(){
    cout<<"value of data1 is "<<getdata1()<<endl;
    cout<<"value of data2 is "<<data2<<endl;
    cout<<"value of data3 is "<<data3<<endl;
}



int main(){
    derive der;
    der.setdata();
    der.process();
    der.display();
    return 0;
}