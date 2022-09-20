#include<iostream>
#include<vector>
using namespace std;

template<class T>
void display(vector<T> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
           // oR
        // cout<<v.at(i)<<" ";

    }
    cout<<endl;
}

int main(){
    //ways to create a vector
    vector<int> vec1;//zero length vector
    vector<char> vec2(4);//4-element character vector
    vector<char> vec3(vec2);//4-element character vector from vec2
    vector<int> vec4(6,3);//6-element vector of threes

    // display(vec1);//zero length
    // vec2.push_back(5);
    // display(vec2);// 5

    // display(vec3);//5
    
    display(vec4);//3,3,3,3,3,3



    // int ele;
    // for(int i=0;i<4;i++){
    //     cout<<"enter an element to add to this vector"<<endl;
    //     cin>>ele;
    //     vec1.push_back(ele);
    // }
    // vec1.pop_back();//nikaal dega last waala 


    // display(vec2);
    // vector<int> :: iterator iter=vec1.begin();//iter points at beginning

    // // vec1.insert(iter,566);//566,1,2,3,4
    // vec1.insert(iter,3,566);//566,566,566,1,2,3,4//3 copies of 566 are inserted

    // display(vec1);

    return 0;
}