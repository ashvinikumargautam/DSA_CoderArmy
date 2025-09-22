#include <iostream>
using namespace std;
void isrectangle(int a,int b,int c,int d){
    if((a==b && c==d) || (a==c && b==d) || (b==c && d==a)){
        cout<<"it is rectangle";
    }else{
        cout<<"not a rectangle";
    }
}
int main (){
int a,b,c,d;
    cout<<"enter the value of a,b,c and d"<<endl;
    cin>>a>>b>>c>>d;
    isrectangle(a,b,c,d);
}