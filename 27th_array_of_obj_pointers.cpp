#include<iostream>
using namespace std;

class shop{
    int id;
    float price;
    public:
        void setdata(int a,float b){
            id=a;
            price=b;
        }
        void getdata(){
            cout<<"the id is "<<id<<" and price is "<<price<<endl;
        }
};

int main(){
    float p,q;
    int size=3;
    shop *ptr=new shop[size];
    shop *ptrtemp=ptr;
    for(int i=0;i<size;i++){
        cout<<"enter id and price of item: "<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
        
    }
    for(int i=0;i<size;i++){
        cout<<"item number "<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    return 0;
}