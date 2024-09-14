#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100] = {};
    for(int i = 0; i < n; i++)
    {
        int x1, x2;
        cin >> x1 >> x2;
        for(int j = x1; j <= x2; j++)
        {
            arr[j] += 1;
        }
        
    }

    int max = 0;
    for(int i = 0; i < 100; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}