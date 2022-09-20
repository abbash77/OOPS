#include<iostream>
using namespace std;

class simple{
    int data1,data2;
    public:
        simple(int a,int b=9){//default argument b=9
            data1=a;
            data2=b;        
        }
        void print(){
            cout<<"data1 and data2 is "<<data1<<","<<data2<<endl;
        }
};

int main(){

    simple a(1);
    a.print();


    return 0;
}