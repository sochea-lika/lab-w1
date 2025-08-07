#include<iostream>
using namespace std;
int main(){
    int i=10;
    while(i>0){
        if(i==4){
            cout<<"This number is 4."<<endl;
        }else if (i==2){
            break;
        }else{
           cout<<i<<endl; 
        }
        i--;
    }
    return 0;
}