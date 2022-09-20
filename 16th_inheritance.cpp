#include<iostream>
using namespace std;

class employee{
    public:
    int id;
    float sal;
        employee(){};//ye zaruri hoga rahna
        employee(int inpid){
            id=inpid;
            sal=34.33;
        }
};

/*
public vis mode--- public member of base class becomes public mem of derived class
private vis mode-- public member of base class becomes private mem of derived class

*/
//class programmer:public employee{};
class programmer:employee{   //default visibility is private
    public:
    programmer(int inpid){
        id=inpid;
    }
    int langcode=9;
    void getid(){
        cout<<id;
    }
};


int main(){
    programmer a(10);
    a.getid();
    return 0;
}