#include <iostream>
using namespace std;
int main(){
    int arr [5]={3,5,1,7,2};
    int minimum = 0;
    for(int i=0;i<sizeof(arr);i++){
        if(arr[i]<minimum){
            minimum = arr[i];
           
        }
    }
    cout<<"minimum element is : "<<minimum<<endl;
}