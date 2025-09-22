#include<iostream>
using namespace std;
int main(){
    int n,fact,i;
    cout<<"enter the number you want  : ";
    cin>>n;
    fact = 1;
    for(i=1;i<=n;i++){
        fact=(fact*i);
    }
    cout<<fact;

}