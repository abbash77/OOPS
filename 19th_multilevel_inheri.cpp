#include<iostream>
using namespace std;

class student{
    protected:
        int rollno;
    public:
        void set_roll_num(int);
        void get_roll_num(void);

};

void student::set_roll_num(int r){
    rollno=r;
}
void student::get_roll_num(){
    cout<<"the roll number is "<<rollno<<endl;
}

class exam:public student{
    protected:
        float maths;
        float phy;
    public:
        void setmarks(float,float);
        void getmarks(void);

};

void exam::setmarks(float m1,float m2){
    maths=m1;
    phy=m2;

}
void exam::getmarks(){
    cout<<"the marks obtained in maths is "<<maths<<endl;
    cout<<"the marks obtained in phy is "<<phy<<endl;
}

class result:public exam{
    float percentage;
    public:
        void display(){
            get_roll_num();
            getmarks();
            cout<<"your percentage is "<<(maths+phy)/2<<endl;
        }

};

int main(){
    result harry;
    harry.set_roll_num(420);
    harry.setmarks(99.9,90.0);
    harry.display();

    return 0;
}