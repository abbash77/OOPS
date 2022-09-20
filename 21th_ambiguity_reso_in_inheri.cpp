#include<iostream>
using namespace std;
//ambiguity 1
class base1{
    public:
        void greet(){
            cout<<"hw r u"<<endl;
        }

};
class base2{
    public:
        void greet(){
            cout<<"kaise ho"<<endl;
        }

};
class derived:public base1,public base2{
    int a;
    public:
        void greet(){
            base1::greet();//ambiguity resolved
        }

};
//ambiguity 2
class b{
    public:
        void say(){
            cout<<"hello world"<<endl;
        }
};
class d:public b{
    int a;
    public:
        void say(){
            cout<<"hello my beautiful people"<<endl;
        }
};
int main(){
    //ambiguity 1
    /*
    base1 base1obj;
    base2 base2obj;
    derived obj;
    obj.greet();//do do greet hh konsa run kre(ambiguity)*/

    //ambiguity 2
    d obj;
    obj.say();//agar say define hoga d me to wo apna waala run krega warna b waala say run krega ambiguity apne ap
    //resolve hogyi yaha
    return 0;
}