#include <iostream>
using namespace std;
int main(){
int arr[10] = {29,10,14,37,13,5,7,8,9,1};
int n = 10; 
for(int i=1;i<n;i++){
    for(int j = i;j>0;j--){
        if(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
        }else {
            break;
        }
    }
}
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";

}
} 