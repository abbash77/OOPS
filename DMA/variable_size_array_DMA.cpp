#include<iostream>
using namespace std;


int main(){

    // new char/int return an address in the heap we can store that address into a pointer 
    int *arr=new int[5];//dynamic allocation of array
    int *i=new int;
    // memory free nhi hogi dma me to hme free krte rahna hoga
    delete []arr;//memory freed ..for array
    delete i;//memory freed.. for int

    return 0;
}