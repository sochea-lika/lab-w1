#include<iostream>
using namespace std;
int main(){
    int score;
    cout<<"Input your score(0-100): ";
    cin >>score;
    if(score >= 60){
        cout<<"You pass";
    }else{
        cout<<"You fail";
    }
    return 0;
}