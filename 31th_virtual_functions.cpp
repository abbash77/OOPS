#include<iostream>
using namespace std;

class base{
    public:
        int var1=1;
        virtual void display(){//agar ye method kahi inherit ho aur same naam ka method waha rhe Aur pointer
        //base type ka ho jo derived obj ko pointer kre to ptrbase->display derived waala display run hoga
        //run time binding
            cout<<"displaying base class var1 "<<var1<<endl;
        }

};
class derived:public base{
    public:
        int var2=3;
        void display(){
            cout<<"displaying derived class var2 "<<var2<<endl;
        }
};

int main(){

    base *baseptr;
    derived derobj;
    baseptr=&derobj;
    baseptr->display();//base waala run hoga obvio as pichle


}