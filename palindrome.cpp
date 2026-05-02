#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int rev = 0;
    int original = n; // Store the original number for comparison

    while(n >0)
    {
        int rem = n%10;
        rev = rev*10 + rem;
        n = n/10;

    }
    if(rev == original)
    {
        cout << "The number is a palindrome." << endl;
    }
    else
    {
        cout << "The number is not a palindrome." << endl;
    }
    cout << "Reversed number is: " << rev << endl;
    return 0;
}