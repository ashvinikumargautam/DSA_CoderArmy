#include <iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){      // n times
        cout<<"i is : "<<i<<"        "<<endl;
        for(int j=0;j<5;j++){    // n tiems 
            cout<<"j is : "<<j<<" ";
        }   
        cout<<endl;
    }

    //TC is  n^2 
}