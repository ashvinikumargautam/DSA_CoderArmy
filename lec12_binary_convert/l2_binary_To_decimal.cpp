#include<iostream>
using namespace std;
int main(){
    int num = 1101;
    int ans=0,mul=1,rem;
    while(num  ) {
        cout<<" num is "<<num<<" : ";
        //reaminder
        rem=num%10;
        //find number
        num/=10;
        //ans
        ans = ans+rem*mul;
        //mul
        mul*=2;
        cout<<ans<<endl;
        
    }
    cout<<"final answer is : ";
    cout<<ans<<endl;
}