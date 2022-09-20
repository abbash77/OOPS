#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
        void setnum(int n1,int n2){
            a=n1;
            b=n2;
        }
        friend complex sumcomplex(complex o1,complex o2);
        void print(){
            cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
        }

};

complex sumcomplex(complex o1,complex o2){//friend function
    complex o3;
    o3.setnum((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main(){
    complex c1,c2,sum;
    c1.setnum(1,4);
    c2.setnum(5,8);
    c1.print();
    c2.print();
    sum=sumcomplex(c1,c2);
    sum.print();
    return 0;
}


/*
Properties of friend function
1.not in the scope of class (class ka hissa nhi hh... sirf data access kr skta)
2.since it is not in the scope of the class it cannot be called by any object of the class
3.usually contains the object as argument
4.can be declared inside public or private section of class
5.it cannot access the members directly by their names and need obj_name.member_name
to access any member.
*/