#include <iostream>

using namespace std;
//fabbonachi series
int main() {
    int a=0 , b=1;
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << a << " " << b << " ";               
    
    for(int i = 3 ; i < n ; i++)
    {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}