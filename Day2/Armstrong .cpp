#include<iostream>
using namespace std;
int main(){
    int num ;
    int ams = 0;
    cout<<"Enter the number:";
    cin>>num;
    int temp = num;
    while (num != 0){
        
        int rev = num % 10;
        num = num / 10;
        ams = ams + (rev *rev *rev ); 
        
    }
    cout<<ams<<endl;
    cout<<num<<endl;
    if(temp == ams){
        cout<<"It is an amstrong number:";
    }
    else {
        cout<<"It is not an amstrong number:";
    }
}