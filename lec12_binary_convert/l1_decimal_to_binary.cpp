#include <iostream>
using namespace std;
int main (){
    int num=13;
    int rem,ans=0,mul=1;
    while(num>0){
        //remainder
        rem=num%8;
        //quaitent
        num/=10;
        //ans
        ans = rem *mul+ans;
        //multiplier
        mul*=10;
    }
    cout<<ans<<endl; //1101 
}