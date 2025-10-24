#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter how many elemnet you have to print";
    cin>>n;
    int prev=0,num = 1;
    for(int i =0; i<n;i++ ){
        int sum;
        sum = num +prev;
        cout<<sum<<"\t";
        num = prev;
        prev =sum;

         

    }
}