#include <iostream>
using namespace std;
void incr(int  n){  //pass by value
    n++;
}
int main(){
int a = 10;
incr(a);
cout<<a<<endl; //10
}