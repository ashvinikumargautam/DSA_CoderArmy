#include<iostream>
using namespace std;
int main(){
    //sum of n num using do while
    int i = 1;
    int n;
    int sum = 0;
    cout<<"enter the value of number : ";
    cin>>n;
    do{
        sum = sum+i;
        i++;
    }while(i<=n);
    cout<<sum;
}