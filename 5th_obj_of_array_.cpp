#include<iostream>
using namespace std;

class Employee{
    int id;
    int sal;
    public:
        void setid(void){
            sal=122;
            cout<<"enter id of employee ";
            cin>>id;
        }
        void getid(void){
            cout<<"the id of this employee is "<<id<<endl;         
        }
};

int main(){

    Employee fb[4];
    for(int i=0;i<4;i++){
        fb[i].setid();
        fb[i].getid();
    }


    return 0;
}