#include<iostream>
using namespace std;

class base{
    public:
        int var1=1;
        void display(){
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
    base *ptr;
    base obj_base;
    derived obj_der;
    ptr=&obj_der;//pointing base class pointer to derived class obj...ho to jayega par derived ke method(displayder) 
    //ko access nhi kar skte//'thats called late binding'
    // ptr->display();//base class ka display run hoga

    derived *ptr2;
    ptr2=&obj_der;
    ptr2->display();//ab derived ka run hoga not base ka
    return 0;
}