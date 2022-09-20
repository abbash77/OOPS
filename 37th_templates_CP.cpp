#include<iostream>
using namespace std;

template <class T>
class vector{
    int size;
    public:
    T * arr;
        vector(int m){
            size=m;
            arr=new T[size];
        }
        T dotproduct(vector &v){
            T d=0;
            for(int i=0;i<size;i++){
                d+=this->arr[i]*v.arr[i];
                
            }
            return d;

        }
};

int main(){
    // vector v1(3);
    // v1.arr[0]=4;
    // v1.arr[1]=3;
    // v1.arr[2]=1;
    // vector v2(3);
    // v2.arr[0]=1;
    // v2.arr[1]=0;
    // v2.arr[2]=1;
    // int a=v1.dotproduct(v2);
    // cout<<a<<endl;
    //agar float hota to answer galat aata...ab template ka use krenge

    vector <float>v1(3);
    // vector <int>v1(3); ye bhi kr skte   
    v1.arr[0]=4.1;
    v1.arr[1]=3.3;
    v1.arr[2]=1.5;
    vector <float>v2(3);
    v2.arr[0]=1.2;
    v2.arr[1]=0;
    v2.arr[2]=1.4;
    float a=v1.dotproduct(v2);
    cout<<a<<endl;




    return 0;
}