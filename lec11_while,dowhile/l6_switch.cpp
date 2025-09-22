#include<iostream>
using namespace std;
int main(){
    int a,b;
    char oper;
    cout<<"enter the value of a : ";
    cin>>a;
    cout<<"enter the oper : ";
    cin>>oper;
    cout<<"enter the value of b : ";
    cin>>b;
    int res;
    switch (oper){
    case '+':
        res = a+b;
        cout<<res;
        break;
    
    case '-':
        res = a-b;
        cout<<res;
        break;
    
    case '*':
        res = a*b;
        cout<<res;
        break;
    
    case '/':
        res = a/b;
        cout<<res;
        break;
    
    case '%':
        res = a%b;
        cout<<res;
        break;
    
    default:
    cout<<"error";
        break;
    }
}