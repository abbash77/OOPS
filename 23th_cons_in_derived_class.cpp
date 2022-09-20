#include<iostream>
using namespace std;

/*
case 1:
class B:public a{
    //order of execution of constructor->first a() then b()
}
case 2:
class a:public b,public c{
    //order of execution of cons is b() then c() and a()
}
case 3:
class a:public b,virtual public c{
    //order od execution of cons is c() then b() and a()
    //virtual ko zyada priority deni hogi
}
*/
class base1{
    int data1;
    public:
        base1(int i){
            data1=i;
            cout<<"base1 class cons called"<<endl;
        }
        void printdata1(){
            cout<<"the value of data1 is "<<data1<<endl;
        }
};
class base2{
    int data2;
    public:
        base2(int i){
            data2=i;
            cout<<"base2 class cons called"<<endl;
        }
        void printdata2(){
            cout<<"the value of data2 is "<<data2<<endl;
        }
};
class derived:public base1,public base2{//yaha pe aage piche likhne se fark padega
    int derived1,derived2;
    public:
        derived(int a,int b,int c,int d):base1(a),base2(b){//yaha pe aage piche likhne se fark nhi padhega
            derived1=c;
            derived2=d;
            cout<<"derived class cons called"<<endl;
        }
        void printdatader(){
            cout<<"the value of derived1 is "<<derived1<<endl;
            cout<<"the value of derived2 is "<<derived2<<endl;

        }
};

int main(){

    derived harry(1,2,3,4);
    harry.printdata1();
    harry.printdata2();
    harry.printdatader();


    return 0;
}