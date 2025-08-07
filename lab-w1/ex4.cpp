#include<iostream>
using namespace std;
int main(){
 int index;
 cout<<"Enter your index: "<<endl;
 cin>>index;
 int num;
 for(int i=0;i<index;i++){
    cout<<"Enter your number: "<<endl;
    cin>>num;
    if(num%1==0&&num%num==0){
        cout<<num<<"is a prime number"<<endl;
    }

 }
 
    return 0;
}