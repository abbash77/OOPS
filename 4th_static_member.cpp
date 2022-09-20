#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;//bydefault static zero se ini rahega//
    //saare object share kr skte same variable
    public:
    void setdata(void){
        cout<<"enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"the id of employee is "<<id<<" and is employee number "<<count<<endl;
    }
    static void getcount(void){//only access static var or function ,not dependant on any object
        cout<<"the value of count is "<<count<<endl;
    }
};

int Employee::count;//static variable
//agar initially 1000 krna chahte to "int Employee::count=1000;" ye kr skte


int main(){

    Employee harry;
    Employee rohan;
    Employee lovish;
    harry.setdata();
    harry.getdata();
    Employee::getcount();//static functions ko aise call krte hh
    rohan.setdata();
    rohan.getdata();
    Employee::getcount();
    lovish.setdata();
    lovish.getdata();
    Employee::getcount();

    return 0;
}