#include<iostream>
using namespace std;
class point{
    int x,y;
    public:
        point(int a,int b){
            x=a;
            y=b;
        }
        void display(){
            cout<<"the point is ("<<x<<","<<y<<")"<<endl;
        }
};
int main(){
    point a(3,5);
    a.display();
    point b(4,6);
    b.display();
    return 0;
}