#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the nnumbre n : ";
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"not prime";
            return 0;
        }else{
            cout<<"n is prime";
            return 0;
        }

    }
}