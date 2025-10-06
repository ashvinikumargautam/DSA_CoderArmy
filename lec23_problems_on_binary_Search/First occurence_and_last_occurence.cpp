#include <iostream>
using namespace std;

int main(){
    int arr[11] = {1,2,3,3,3,5,6,7,8,9,10};
    int n = 11;
    int key, first = -1;

    cout << "Enter the key to be searched: ";
    cin >> key;   
    int start = 0;
    int last = 0;
    int end = n - 1;

    while(start <= end){
        int mid = (start + end) / 2;

        if(arr[mid] == key){
            first = mid;     // ✅ store current index
            end = mid - 1;   // continue searching on the left
        } else if(arr[mid] < key){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    ///for last occurrence
    start = 0; 
    end = n - 1;
    while(start <= end){
        int mid = (start + end) / 2;

        if(arr[mid] == key){
            last = mid;     // ✅ store current index
            start = mid + 1;   // continue searching on the right
        } else if(arr[mid] < key){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    if(first != -1){
        cout << "First occurrence at index " << first<<endl;
        cout << "last occurrence at index " << last;
    } else {
        cout << "Not Present";
    }

    return 0;
}
