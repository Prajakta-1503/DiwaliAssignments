#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum =sum + 2 * i; 
    }
    cout << "Sum of first n even numbers is: " << sum << endl;
    return 0;
}
