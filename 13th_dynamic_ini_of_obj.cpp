#include<iostream>
using namespace std;

class bankdeposit{
    int principle;
    int year;
    float interest;
    float returnval;
    public:
        bankdeposit(){}//empty constructor,,,ye zaruri hh rahna warna error aayega
        bankdeposit(int p,int y,float r);//r can be a value like 0.04
        bankdeposit(int p,int y,int r);//r can be a value like 14
        void show();

};

bankdeposit::bankdeposit(int p,int y,float r){
    principle=p;
    year=y;
    interest=r;
    returnval=principle;
    for(int i=0;i<y;i++){
        returnval=returnval*(1+r);
    }
}
bankdeposit::bankdeposit(int p,int y,int r){
    principle=p;
    year=y;
    interest=float(r)/100;
    returnval=principle;
    for(int i=0;i<y;i++){
        returnval=returnval*(1+interest);
    }
}
void bankdeposit::show(){
    cout<<"principle amount was "<<principle<<endl
    <<"return value after "<<year
    <<" is "<<returnval<<endl;
}

int main(){

    bankdeposit bd1,bd2,bd3;//blank object bnega to blank cons run hoga
    int p,y;
    float r;
    int R;
    
    cout<<"enter the value of p y r "<<endl;
    cin>>p>>y>>r;
    bd1=bankdeposit(p,y,r);
    bd1.show();

    cout<<"enter the value of p y R "<<endl;
    cin>>p>>y>>R;
    bd2=bankdeposit(p,y,R);
    bd2.show();
    return 0;
}