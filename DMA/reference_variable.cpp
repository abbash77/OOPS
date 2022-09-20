#include<iostream>
using namespace std;


void update(int n){
    n++;
}
void updateref(int& n){//taking by reference
    n++;
}

int main(){

    // int i=5;

    // //create a reference variable
    // int &j=i;
    // cout<<i<<endl;//5
    // i++;
    // cout<<i;//6
    // j++;
    // cout<<j;//7
    // cout<<i;//7
    // dono ek hi variable ho gye//ek hi dabbe ke 2 naam hh
    // same memory diff name

    // ====================================================================================

    //******************why different name*****************
    int n=5;
    cout<<n;//5
    update(n);//pass by value
    cout<<n;//5

    cout<<n;//5
    updateref(n);//pass by reference
    cout<<n;//6


    return 0;
}