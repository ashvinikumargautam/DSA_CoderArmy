#include<iostream>
using namespace std;
int main(){ 
    int arr[10] = {29,10,14,37,13,5,7,8,9,1};
    for (int i=0;i<9;i++){
        int index = i;
        for(int j=i+1;j<10;j++){
            if(arr[j]<arr[index]){
                index = j;
            }
        }
        swap(arr[i],arr[index]);
    }

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}   