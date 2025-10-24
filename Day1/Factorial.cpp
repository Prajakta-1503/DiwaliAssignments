#include<iostream>
using namespace std;
int main(){
    int num;
    int fact=1;
    cout<<"enter a num";
    cin>>num;
    for(int i=num;i>=1;i--){
        fact=fact*i;
    }
    cout<<"fact num is"<<fact;
    
}