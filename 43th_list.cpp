#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int>::iterator it;
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<<endl;
    }
    cout<<endl;

}

int main(){
    list<int> list1;//list of zero length
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(8);
    list1.push_back(9);

    // display(list1);
    // list1.pop_back();//5 6 8 9
    // display(list1);//5 6 8
    // list1.pop_front();
    // display(list1);//6 8
    // list1.remove(8);//saare occurence remove kr dega 8 ke
    // display(list1);//6

    //sorting the list
    // list1.sort();//5 6 8 9


    list<int> list2(3);//empty list of size 7
    list<int>::iterator iter;
    iter=list2.begin();
    *iter=45;
    iter++;
    *iter=48;
    iter++;
    *iter=40;
    iter++;
    display(list2);

    //merging two list
    // list1.merge(list2);
    // display(list1);//5 6 8 9 45 48 40 

    //reversing the list
    list1.reverse();
    display(list1);//9 8 6 5

    return 0;
}