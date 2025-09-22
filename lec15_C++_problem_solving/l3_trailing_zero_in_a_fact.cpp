
#include<iostream>
using namespace std;
int trailingZeroes(int n) {
        // Write Your Code here
        int fact = 1,count = 0;
        while (n>0){
            fact = n*(n-1);
            n--;
        }
        while(fact%10==0){
            count++;
        }
        cout<<fact<<endl;
        return count;
    }
int main(){
    int num ;
    cin<<num;
    cout<<trailingZeroes(num);
}