#include<iostream>
using namespace std;

class complex{
    int real,img;
    public:
        void setdata(int a,int b){
            real=a;
            img=b;
        }
        void getdata(){
            cout<<"the real part is "<<real<<endl<<"the img part is "<<img<<endl;
        }


};

int main(){
    // complex c1;
    // complex *ptr=&c1;
    // complex *ptr=new complex;
    // (*ptr).setdata(1,54);
    // (*ptr).getdata();

    //arrow operator
    // ptr->setdata(1,54);
    // ptr->getdata();

    //array of obj
    complex *ptr=new complex[4];
    ptr->setdata(1,2);
    ptr->getdata();
    return 0;
}