#include   <iostream>
using namespace std;
int main(){
    int arr[10] = {29,10,14,37,13,5,7,8,9,1};
    int n = 10;
    for (int i=n-2;i>=0;i--){
       
        for(int j=0;j<=i;j++){               //for ascending order
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                
            }
            // if(arr[j]>arr[j+1]){          //for descending order
            //     swap(arr[j],arr[j+1]);
                
            // }
           
        }
    }

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}