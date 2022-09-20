#include<iostream>
#include<map>
#include<string>
using namespace std;


//map is an associative array
int main(){
    map<string,int> marksmap;
    marksmap["harry"]=98;
    marksmap["jack"]=58;
    marksmap["rohan"]=88;
    marksmap.insert({{"abbas",169},{"haider",87}});
    map<string,int>::iterator it;
    for(it=marksmap.begin();it!=marksmap.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    cout<<marksmap.size();//5



    return 0;
}