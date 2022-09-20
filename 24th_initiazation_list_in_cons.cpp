#include <iostream>
using namespace std;

/*
syntax for initialization list in constructor:
constructor(argument-list):initiazation-section
{
    assignment+other codel;
}
class text{
    int a;
    int b;
    public:
    test(int i,int j):a(i),b(j){
        constructor-body
    }
};
*/
class test
{
    int a;
    int b;

public:
    // test(int i,int j):a(i),b(j)//a=i,b=j
    // test(int i, int j) : a(i), b(i + j)//a=i and b=i+j
    // test(int i, int j) : a(i), b(2 * j)//a=i and b=2*j
    // test(int i, int j) : a(i), b(a + j)//a=i and b=a+j
    // test(int i, int j) : b(j), a(i + b)//b=j and a=i+b---->>a ki garbage value milegi kyuki a pahle declare huwa hh to 
    //a ko pahle value do then b ko value do
    test(int i,int j):a(i)
    { 
        b=j;
        cout << "cons executed" << endl;
        cout << "value of a and b are " << a << " and " << b << endl;
    }
};
int main()
{
    test t(4, 6);

    return 0;
}