#include<iostream>
using namespace std;
int main(){
    int num;
    int sum=0;
    while(num!=0){
        cout<<"Enter your number:";
        cin>>num;
        sum+=num;
    }
    cout<<"The answer is:"<<sum;
    return 0;
}