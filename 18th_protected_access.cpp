#include<iostream>
using namespace std;

class base{
    protected://private hh but inherited ho jayega
        int a;
    private:
        int b;

};
/*
//for a protected member 
                            public derivation   private derivation   protected derivation
    1.private                  not inheri           not                     not
    2.protected                 protected           private                 protected     
    3.public                    public              private                 protected
*/
class derived:protected base{


};

int main(){

    derived d;
    // d.a;//cant access

    return 0;
}