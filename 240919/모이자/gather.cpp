#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum;
    int min = arr[0];
    for(int i = 0; i < n; i++)
    {
        sum = 0;
        for(int j = 1; j <= n; j++)
        {
            sum += arr[j-1] * abs(i + 1 - j);
        }
        if(sum < min)
        {
            min = sum;
        }
    }

    cout << min;
    return 0;
}