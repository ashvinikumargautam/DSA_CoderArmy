#include<iostream>
using namespace std;
int main(){
    //sum of n num using do while
    int n;
    int sum = 0;
    cout<<"enter the value of number : ";
    cin>>n;
    for(int i =1;i<=n;i++){
        if(i==6)
            break;
    sum=sum+i;
    }
    cout<<sum<<endl;
    int ans=0;
    for(int i =1;i<=n;i++){
        if(i==6)
            continue;;
    ans=ans+i;
    }
    cout<<ans;
}