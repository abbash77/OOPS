#include<iostream>
using namespace std;

//destructor never takes an arg nor returns a value
int count=0;
class num{
    public:
        num(){
            count++;
            cout<<"this is the time when constructor called for obj num "<<count<<endl;
        }
        ~num(){
            cout<<"this is the time when destructor is called for obj num "<<count<<endl;
            count--;
        }


};

int main(){
    cout<<"we are inside our main func "<<endl;
    cout<<"creating first obj n1"<<endl;
    num n1;
    {
        cout<<"entering this block"<<endl;
        cout<<"creating two more obj "<<endl;
        num n2,n3;
        cout<<"exiting this block"<<endl;
    }
    cout<<"back to main"<<endl;
    return 0;
}