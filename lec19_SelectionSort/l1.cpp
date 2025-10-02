#include <iostream>
using namespace std;
int main(){ 
int arr[1000];
int n;
cout<<"Enter the size of array : ";
cin>>n; 
cout<<"Enter the elements of array : ";
for(int i=0;i<n;i++){
     cin>>arr[i];
}


for(int i=0;i<5;i++){
    int index = i;
    for(int j=i+1;j<6;j++){
        if(arr[j]<arr[index]){
            index = j;
        }
    }
    swap(arr[i],arr[index]);
}
cout<<"Sorted Array is : ";
for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}
}