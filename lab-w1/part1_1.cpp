#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin >> age;
    if (age <= 12){
        cout <<"You is a child";
    }
    else if(age >= 13 && age <= 19 ){
        cout <<"You is a teen";
    }else{
        cout <<"You is a adult";
    }
    return 0;
}