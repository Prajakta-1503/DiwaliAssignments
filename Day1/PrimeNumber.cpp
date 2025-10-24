#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << "Not Prime";
    }
    else{
        int i;
        for (i = 2; i < n; i++) {
            if (n % i == 0)
            cout<<"not prime";
                break;
        }

        if (i == n)
            cout << "Prime";
        else
            cout << "Not Prime";
    }

    return 0;
}

