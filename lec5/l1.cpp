#include<iostream>
using namespace std;
int main(){
    //for 101 to 200
    int n =200;
    for(int i =101;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    //for a to z
    for(char i ='a';i<='z';i++){
        cout<<i<<" ";
    }
    cout<<endl;
    
    //for 200 to 101
    
    for(int i =200;i>=101;i--){
        cout<<i<<" ";
    }
    cout<<endl;
    //1 to 100 but difference of 3
    
    for(int i =1;i<=100;i=i+3){
        cout<<i<<" ";
    }
    cout<<endl;
}