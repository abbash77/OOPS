#include<iostream>
#include<cstring>
using namespace std;

class cwh{
    protected:
        string title;
        float rating;
    public:
        cwh(string s,float r){
            title=s;
            rating=r;
        }
        virtual void display(){}
};
class cwhvideo:public cwh{
    float videolength;
    public:
        cwhvideo(string s,float r,float vl):cwh(s,r){
            videolength=vl;
        };
        void display(){
            cout<<"this is an amazing video with title "<<title<<endl;
            cout<<"ratings: "<<rating<<" Out of 5 stars "<<endl;
            cout<<"length of this video is:"<<videolength<<" minutes"<<endl;
        }
};
class cwhtext:public cwh{
    int words;
    public:
        cwhtext(string s,float r,int wc):cwh(s,r){
            words=wc;
        };
        void display(){
            cout<<"this is an amazing text tutorial with title "<<title<<endl;
            cout<<"ratings of this text : "<<rating<<" Out of 5 stars "<<endl;
            cout<<"no of words in this text tutorial is :"<<words<<" minutes"<<endl;
        }
};

int main(){
    string title;
    float rating ,vlen;
    int words;
    //for code with harry video
    title="Django tutorial";
    vlen=4.56;
    rating=4.89;
    cwhvideo djvideo(title,rating,vlen);
    // djvideo.display();

    //for code with harry text
    title="Django tutorial text";
    words=556;
    rating=4.19;
    cwhtext djtext(title,rating,words);
    // djtext.display();

    cwh* tuts[2];
    tuts[0]=&djvideo;
    tuts[1]=&djtext;
    tuts[0]->display();//apna apna display call krenge ye dono
    tuts[1]->display();

    return 0;
}
/*
rules of virtual functions
1.they cannot be static
2.they are accessed by obj pointers
3.virtual functions can be a friend of another class
4.a virtual function in base class can might be used
5.if a virtual function defined in the base class ,there is no neccesity of defining it in the derived class//
//mila to derived ka run krega warna base ka hi run kr dega to derived me daalo display ya na daalo
*/