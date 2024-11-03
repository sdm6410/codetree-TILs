#include <iostream>
#include <climits>
using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;
    int max_value = INT_MIN;
    for(int i = 0; i <= 1000; i++)
    {
        for(int j = 0; j <= 1000; j++)
        {
            int value = a * i + b * j;
            if(c >= value)
                max_value = max(max_value, value);
            else
                break;                     
        }
    }
    cout << max_value;
    return 0;
}