#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n + 1] = {};

    for(int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        for(int j = a; j <= b; j++)
        {
            arr[j] += 1;
        }
    }

    int max = 0;
    for(int i = 0; i <= n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max; 
    return 0;
}