#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
    //member function method
    // ofstream out;
    // out.open("sample34.txt");
    // out<<"this is me";
    // out.close();

    ifstream in;
    in.open("sample34.txt");
    string st;
    in>>st;
    while(in.eof()==0){//eof end of file
        getline(in,st);//aache se saara text aajayeaga st me
        cout<<st<<endl;
    }
    in.close();
    return 0;
}