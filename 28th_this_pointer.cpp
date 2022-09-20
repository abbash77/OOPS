#include<iostream>
using namespace std;

class A{
    int a;
    public:
        A& setdata(int a){
            // a=a;//invalid statement 
            this->a=a;//valid statement
            //this us object ko point krta hh jisne member function ko invoke kiya hh
            return *this;//agar object ko return krna chahe to aise kr skte
        }
        void getdata(){
            cout<<"the value of a is "<<a<<endl;
        }
};

int main(){
    //'this' is a pointer which points to the object which invokes the member function
    A a;
    // a.setdata(4);//ye a object ko return kr dega
    a.setdata(4).getdata();//ye acha tareeka hoga likhne ka

    return 0;
}