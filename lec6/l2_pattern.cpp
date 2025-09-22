#include<iostream>
using namespace std;
int main(){
    for(int i =1;i<=5;i++){
        for(int j =1;j<=5;j++){
            cout<<i<<" ";
        }

            cout<<endl;
    }

        // 1 1 1 1 1 
        // 2 2 2 2 2
        // 3 3 3 3 3
        // 4 4 4 4 4
        // 5 5 5 5 5


        for(int i =1;i<=5;i++){
        for(int j =1;j<=5;j++){
            cout<<j<<" ";
        }

            cout<<endl;
    }
            // 1 2 3 4 5
            // 1 2 3 4 5
            // 1 2 3 4 5
            // 1 2 3 4 5
            // 1 2 3 4 5

        for(int i =1;i<=5;i++){
        for(int j =5;j>=1;j--){
            cout<<j<<" ";
        }

            cout<<endl;
    }
        // 5 4 3 2 1
        // 5 4 3 2 1
        // 5 4 3 2 1
        // 5 4 3 2 1
        // 5 4 3 2 1


        for(int i =1;i<=5;i++){
        for(int j =1;j<=5;j++){
            cout<<j*j<<" ";
        }

            cout<<endl;
    }

            // 1 4 9 16 25
            // 1 4 9 16 25
            // 1 4 9 16 25 
            // 1 4 9 16 25
            // 1 4 9 16 25
        for(char i ='a';i<='e';i++){
        for(char j ='a';j<='e';j++){
            cout<<i<<" ";
        }

            cout<<endl;
    }
            // a a a a a
            // b b b b b
            // c c c c c
            // d d d d d
            // e e e e e

    
}