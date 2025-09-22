#include <iostream>
using namespace std;
int main(){
    //and &&
    if(4>2 && 3>5){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    // or ||
    
    if(4>2 || 3>5){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }

    //not !
    if(!9){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
         char name;
         cout<<"enter the letter : ";
         cin>>name;
         if(name=='a' || name=='e' || name =='i' || name =='o' || name =='u'){
            cout<<"name is vowel"<<endl;

         }else{
            cout<<"name is consonent";
         }


}