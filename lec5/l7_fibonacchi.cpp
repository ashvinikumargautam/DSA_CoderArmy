#include<iostream>
using namespace std;
int main(){
    int pre =0,cur=1,next,i,n;
    cout<<"enter the value of n : ";//n no of term in fib series
    cin>>n;
    cout<<pre<<" "<<cur<<" ";
    for(i=3;i<=n;i++){
        next = pre+cur;
        cout<<next<<" ";
        pre=cur;
        cur=next;
}
}