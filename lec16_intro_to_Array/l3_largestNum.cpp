#include <iostream>
using namespace std;
int main(){
    
    int  arr[5]={2,3,1,7,8};
    int ans = INT8_MAX;
    //min value
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]<ans)
        ans = arr[i];
    }
    cout<<"minimum value : "<<ans<<endl;
    
    //man value
    ans = INT8_MIN;
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]>ans)
        ans = arr[i];
    }
    cout<<"maximum value : "<<ans<<endl;
    
}
