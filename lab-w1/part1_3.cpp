#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: ";
    cin >> number;
    if (number %3 == 0){
        cout <<"the number is divisible by 3";
    }else{
        cout <<"the number is not divisible by 3";
    }
    return 0;
}