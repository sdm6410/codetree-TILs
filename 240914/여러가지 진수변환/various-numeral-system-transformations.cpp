#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;
    int digits[20] = {};
    int cnt = 0;

    while(true)
    {
        if(n < b)
        {
            digits[cnt++] = n;
            break;
        }

        digits[cnt++] = n % b;
        n /= b;
    }

    for(int i = cnt - 1; i>=0; i--)
        cout << digits[i];
    return 0;
}