#include<iostream>
using namespace std;
class c2;
class c1{
    int val;
    public:
        void indata(int a){
            val=a;
        }
        void display(void){
            cout<<val<<endl;
        }
        friend void swap(c1 &,c2 &);
};
class c2{
    int val2;
    public:
        void indata(int a){
            val2=a;
        }
        void display(void){
            cout<<val2<<endl;
        }
            friend void swap(c1 &,c2 &);
};
void swap(c1 &o1,c2 &o2){
    int temp=o1.val;
    o1.val=o2.val2;
    o2.val2=temp;
}
int main(){
    c1 a;
    a.indata(3);
    a.display();
    c2 b;
    b.indata(4);
    b.display();
    swap(a,b);
    cout<<endl<<"after swapping"<<endl;
    a.display();
    b.display();

    return 0;
}