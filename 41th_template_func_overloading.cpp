#include<iostream>
using namespace std;

//first concept(scope lgake bahar kaise define kre function ko)
template<class T>
class harry{
    public:
        T data;
        harry(T a){
            data=a;
        }
        void display();
        
};
template<class T>
void harry<T>:: display(){
            cout<<data<<endl;
}


//second concept (overloading)
void func(int a){
    cout<<"i am first"<<a<<endl;
}

template<class T>
void func(T a){
    cout<<"i am templatised func"<<a<<endl;
}

template<class T>
void func1(T a){
    cout<<"i am templatised func"<<a<<endl;
}

int main(){
    // harry<int> obj(3);
    // obj.display();


    // func(4);//konsa call hoga//exact match takes the highest priority
    func1(4);
    return 0;
}