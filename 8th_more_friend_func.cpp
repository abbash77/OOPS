#include<iostream>
using namespace std;
class y;
class x{
    int data;
    public:
        void setval(int value){
            data=value;
        }
        friend void add(x,y);
};

class y{
    int num;
    public:
        void setval(int value){
            num=value;
        }
            friend void add(x,y);
};

void add(x o1,y o2){
    cout<<"summing datas of x and y obj gives me "<<o1.data+o2.num<<endl;
}

int main(){
    x a;
    a.setval(3);
    y b;
    b.setval(5);
    add(a,b);
    return 0;
}