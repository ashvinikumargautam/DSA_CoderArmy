#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int c;
    c=a;
    a=b;
    b=c;
}
int main(){
int a,b;
cout<<"enter the value of a and b"<<endl;
cin>>a>>b;
cout<<"before swap"<<endl<<"a : "<<a<<endl<<"b : "<<b<<endl;
swap(a,b);
cout<<"a and b after swap"<<endl;
cout<<"a : "<<a<<endl<<"b : "<<b;
}