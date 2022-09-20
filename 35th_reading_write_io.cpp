#include<iostream>
#include<fstream>

using namespace std;

int main(){
    //connecting our file with hout stream
    ofstream hout("sample34.txt");
    string name;
    cout<<"enter your name"<<endl;
    cin>>name;
    hout<<"my name is "+name;
    hout.close();//jo link bnayi thi kaam krne ke liye us link lo band krdiye

    ifstream hin("sample34.txt");
    string content;
    hin>>content;
    cout<<content;


    return 0;
}