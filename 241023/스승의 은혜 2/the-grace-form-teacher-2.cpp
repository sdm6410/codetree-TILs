#include <iostream>
#include <algorithm>
using namespace std;

int n, b;

int main() {
    cin >> n >> b;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {

        b -= arr[i];
        if(b < 0)
            break;
        cnt++;
    }

    cout << cnt;
    return 0;
}