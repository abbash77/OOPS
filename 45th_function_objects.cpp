#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main(){

    //function obj(functor)::function wrapped in a class so that it available like an object
    int arr[]={1,12,3,45,5};
    sort(arr,arr+3);//1 3 12 45 5//sort in ass order
    sort(arr,arr+3,greater<int>());//12 3 1 45 5 //sort in desc order
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
