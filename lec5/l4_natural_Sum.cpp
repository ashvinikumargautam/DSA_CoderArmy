#include <iostream>
using namespace std;
int main(){
    int n,sum,i;
    n=10;
    sum=0;
    for(i=1;i<=n;i++){
        sum = sum+i;
    }
    cout<<(n*(n+1))/2<<endl;
    cout<<sum;
}