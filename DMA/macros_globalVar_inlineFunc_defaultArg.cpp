#include<iostream>
using namespace std;
#define pi 3.14//macro-> a piece of code in a program that is replaced by value of macro
//it take no space to store 3.14, and u cannot change pi later ,as below pi=pi+1 is not possible
// -----------------------------------------------------------------------------------------------------------


int i=5;//global variable
//but use mat kro global variable kyuki koi bhi function use kr skta isko aur change kr skta hh********
void a(){
    cout<<i;//printing global var
}
// ==============================================================================================================
//inline functions 
// agar function ki body ek line ki hh to inline bnado
//
inline int getMax(int& a,int& b){//extra memory use nhi krega inline hh ye
    return (a>b)?a:b;

}
//================================================================================================================
//default arg

void print(int arr[],int n,int start=0){//start ko koi pass nhi krega to 0 le lenge bas thats is default arg
    for(int i=start;i<n;i++){//hmesha rightmost ko default bnayenge 'int arr[],int n=3,int start' is not possible
        cout<<arr[i]<<" ";//but 'int arr[],int n=3,int start=0 ' is possible
    }
}


int main(){
    // pi=pi+1;//is not possible
    // *********************************************************************************************************

    cout<<i;//printing global var
    // *******************************************************************************************************
    int a=1;
    int b=2;
    int ans=0;
    //first method
    // if(a>b){
    //     ans=a;
    // }
    // else{
    //     ans=b;
    // }
    //second method(tertiary operator)
    ans=(a>b)?a:b;//if true then a if false then b
    a=a+3;
    b=b+2;
    // ans=(a>b)?a:b;//baar baar likhne ke jagah func use krlo
    ans=getMax(a,b);//inline func me func call replace ho jayega func ke body se yaha pe kch aisa dikhega ans=(a>b)?a:b;
    // ****************************************************************************************************
    int arr[5]={28,8,2,3,4};
    int size=5;
    print(arr,size);

    return 0;
}