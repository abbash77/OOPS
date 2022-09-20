#include<iostream>
using namespace std;


// float funcavg(int a,int b){
//     float avg=(a+b)/2.0;
//     return avg;
// }
// float funcavg2(int a,float b){
//     float avg=(a+b)/2.0;
//     return avg;
// }

template <class T>
void swapp(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}

template <class T1,class T2>
float funcavg(T1 a,T2 b){
    float avg=(a+b)/2.0;
    return avg;
}

int main(){
    float a;
    a=funcavg(3,4);
    cout<<a<<endl;

    //swap
    int x=6,y=8;
    swapp(x,y);
    cout<<x<<endl<<y;
    return 0;
}