#include <iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int key;
    cout<<"Enter the key to be searched ";
    cin>>key;   
    int start=0;
    int end = n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == key){
            cout<<"Present at index "<<mid;
            return 0;
        }else if(arr[mid]<key){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
}