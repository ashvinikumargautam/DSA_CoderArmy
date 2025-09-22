#include<iostream>
using namespace std;
int main(){
    int a=66;
    char c='b';
    a=c;
    cout<<a; //output = 98
    c=a;
    cout<<c;  //output = b
}