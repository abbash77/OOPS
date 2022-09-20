#include<iostream>
#include<cstring>
using namespace std;

class cwh{
    protected:
        string title;
        float rating;
    public:
    //aisi class jisko bnaya isliye jaaye ki kisiko inherit krna hh is class ko to usse 
    //abstract base class kahte hh jaise cwh abstract base class hh
        cwh(string s,float r){
            title=s;
            rating=r;
        }
        virtual void display()=0;//do nothing function=0 mtlb (pure virtual function)
        //agar cwhvideo ya cwhtext me display define nhi huwa to ab error de dega abhi tak cwh ka display run kr deta 
        //tha par ab run dega kyuki pure virtual function hogya ab ye

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

    //for code with harry text
    title="Django tutorial text";
    words=556;
    rating=4.19;
    cwhtext djtext(title,rating,words);

    cwh* tuts[2];
    tuts[0]=&djvideo;
    tuts[1]=&djtext;
    tuts[0]->display();
    tuts[1]->display();

    return 0;
}