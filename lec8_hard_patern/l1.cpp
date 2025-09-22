#include <iostream>
using namespace std;
int main(){
    int n=5;
    // cout<<"enter the value of n : ";
    // cin>>n;
    for(int i =1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" - "<<" ";
        }
        for(int j =1;j<=i;j++){
            cout<<" * "<<" ";
        }
        cout<<endl;
    }

            // -   -   -   -   *  
            // -   -   -   *   *
            // -   -   *   *   *
            // -   *   *   *   *
            // *   *   *   *   *

        for(int i =1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"-"<<" ";
        }
        for(int j =1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
            // - - - - 1
            // - - - 2 2
            // - - 3 3 3
            // - 4 4 4 4
            // 5 5 5 5 5   
            
            for(int i =1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"-"<<" ";
        }
        for(int j =1;j<=i;j++){
            
            cout<<j<<" ";
        }
        cout<<endl;
    }
            // - - - - 1
            // - - - 1 2
            // - - 1 2 3
            // - 1 2 3 4
            // 1 2 3 4 5

        for(int i =1;i<=n;i++){
        //space
        for(int j=1;j<=n-i;j++){
            cout<<"-"<<" ";
        }
        //char
        for(int j =1;j<=i;j++){
            char name = 'A'+j-1;
            cout<<name<<" ";
        }
        cout<<endl;
    }
            // - - - - A
            // - - - A B
            // - - A B C
            // - A B C D
            // A B C D E

        for(int i =1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"-"<<" ";
        }
        for(int j =i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
            // - - - - 1
            // - - - 2 1
            // - - 3 2 1 
            // - 4 3 2 1
            // 5 4 3 2 1
}