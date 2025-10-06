#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;

    while(start <= end){
        int mid = (start + end) / 2;
        
        if(arr[mid] == key){
            return mid;
        } else if(arr[mid] < key){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    int key;

    cout << "Enter the key to be searched: ";
    cin >> key;

    int index = BinarySearch(arr, n, key);  // corrected here

    if(index != -1){
        cout << "Present at index " << index;
    } else {
        cout << "Not Present";
    }

    return 0;
}
