#include<iostream>
using namespace std;
//forward declaration
class complex;

class calculator{
    public:
        int add(int a,int b){
            return a+b;
        }
        int sumrealcomplex(complex,complex);//only defining
        int sumcompcomplex(complex,complex);
};
class complex{
    int a,b;
    //individually declaring functions as friends
    /*friend int calculator::sumrealcomplex(complex o1,complex o2);
    friend int calculator::sumcompcomplex(complex o1,complex o2);*/

    //aliter :declaring the entire calculator class as friend;
    friend class calculator;//koi bhi function calculator ka complex ka data access kr skta

    public:
        void setnum(int n1,int n2){
            a=n1;
            b=n2;
        }
        void print(){
            cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
        }

};

int calculator::sumrealcomplex(complex o1,complex o2){
            return (o1.a+o2.a);
        }
int calculator::sumcompcomplex(complex o1,complex o2){
            return (o1.b+o2.b);
        }
int main(){

    complex o1,o2;
    o1.setnum(1,4);
    o2.setnum(5,7);

    calculator calc;
    int res=calc.sumrealcomplex(o1,o2);
    cout<<"the sum of real part of o1 and o2 is "<<res<<endl;
    int res2=calc.sumcompcomplex(o1,o2);
    cout<<"the sum of complex part of o1 and o2 is "<<res2<<endl;
    return 0;
}