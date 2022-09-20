#include<iostream>
using namespace std;

int main(){

   
    int n=4;// n is row
    int m=5;//col
    int** ptr=new int*[n];//array of pointers
    for(int i=0;i<n;i++){
        ptr[i]=new int[m];
    }
    //taking values
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ptr[i][j];
        }
    }
    //printing
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ptr[i][j];
        }
    }
    //memory free kr rhe

    for(int i=0;i<n;i++){
        delete []ptr[i];//pahle ye del krenge then wo
    }
    
    delete []ptr;


    return 0;
}