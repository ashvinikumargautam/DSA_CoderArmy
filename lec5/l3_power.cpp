#include<iostream>
using namespace std;
int main(){
    int n,p;
    cout<<"enter the value of number : ";
    cin>>n;
    cout<<"enter the value of power : ";
    cin>>p;
    int result =n;
    for(int i=1;i<p;i++){
        result = result*n;
    }  
    cout<<result;
    
}