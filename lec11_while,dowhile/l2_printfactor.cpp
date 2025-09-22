#include<iostream>
using namespace std;
int main(){
    //print factors of number
    int n =30;
    int i =1;
    while(i<=n){
        if(n%i==0){
            cout<<i<<endl;
        }
        i++;
    }
}