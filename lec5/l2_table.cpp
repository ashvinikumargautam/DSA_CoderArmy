#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number : ";
    int n ;
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
    for(int i =n;i<=10*n;i=i+n){
        cout<<i<<endl;
    }
    
}