#include <iostream>
using namespace std;
void fun(int a[],int n ){
    cout<<"size of a :"<<sizeof(a)<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[5]={2,3,1,7,8};
    cout<<"size of arr :"<<sizeof(arr)<<endl;
    fun(arr,5);
}