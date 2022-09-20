#include<iostream>
using namespace std;
/*
student-->test
student-->sports
test-->result
sports-->result
*/



class student{
    protected:
        int roll_no;
    public:
        void set_num(int a){
            roll_no=a;
        }
        void print(){
            cout<<"your roll no is "<<roll_no<<endl;
        }
};
class test: virtual public student{
    protected:
        float maths;
        float phy;
    public:
        void set_marks(float m1,float m2){
            maths=m1;
            phy=m2;
        }
        void print_marks(void){
            cout<<"your result is here:"<<endl
                <<"maths:"<<maths<<endl
                <<"physics:"<<phy<<endl;
        }
};
class sports:virtual public student{
    protected:
        float score;
    public:
        void set_score(int b){
            score=b;
        }
        void print_score(void){
            cout<<"your PT score is "<<score<<endl;
        }

};
class result:public test,public sports{//roll_no ki sirf copy milegi result ko
    private:
        float total;
    public:
        void display(){
            total=(maths+phy+score);
            print();
            print_marks();
            print_score();
            cout<<"your total score is : "<<total<<endl;
        }

};
int main(){
    result harry;
    harry.set_num(4200);
    harry.set_marks(78.9,65.8);
    harry.set_score(87);
    harry.display();
    



    return 0;
}