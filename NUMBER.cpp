#include <iostream>

using namespace std;
//reverse of a number

int main() {
    int n;
    cout<< "Enter a number: ";
    cin >> n;
    int rev = 0;
    int sum = 0;
    while(n > 0)
    {
        int rem = n%10;
        rev = rev*10 + rem;
        sum += rem;
        n = n/10;
    }
    cout << "Reversed number is: " << rev << endl;
    return 0;
}