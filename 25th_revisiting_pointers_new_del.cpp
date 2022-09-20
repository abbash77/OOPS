#include<iostream>
using namespace std;

int main(){
    //basic example
    /*
    int a=4;
    int* ptr=&a;
    cout<<"the value a is "<<*(ptr);*/

    //new operator
    // int *p=new int(40);
    // cout<<"the value at address p is "<<*(p);

    int *arr=new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    delete[] arr;//block free kr dega saare
    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl;//garbage aayegi kyuki pahle hi free krdiye
    cout<<"the value of arr[2] is "<<arr[2]<<endl;
    return 0;
}