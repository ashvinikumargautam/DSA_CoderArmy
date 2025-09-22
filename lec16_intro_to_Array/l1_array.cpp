#include <iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
int main() {
    int arr[4]={1,24,5,3}; //declaration and initialization
    cout<<"element at index "<<1<<" : "<<arr[1]<<endl; //accessing the elements of array
    cout<<"sum is :"<<add(2,3);

    int name[6]={7,6,2,3,4,1};
    cout<<endl<<"name is : ";
    
    for(int i=0;i<6; i++) {
    cout <<" "<< name[i]<<" " ; // VALID: 'i' is in scope
}
cout<<sizeof(name);

    return 0; 
}