#include <iostream>
using namespace std;

int main() {
   int n;
   cout<<"Enter Number";
   cin>>n;
   int reverse= 0;
   int rem;
   int temp =n ;
   while (n!=0)
   {
   rem = n%10;
   reverse = reverse*10+rem;
   n = n/10;
   }
   if (temp== reverse){
    cout<<"Palindrome no";
   }else{
    cout<<"Not a Palindrome no";
   }
}
