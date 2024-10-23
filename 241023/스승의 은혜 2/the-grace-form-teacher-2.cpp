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
        if(b >= 0)
        {
            cnt++;
            continue;
        }
        else
        {
            b += arr[i];
            int sale = arr[i] / 2;
            if(b - sale >= 0)
            {
                cnt++;
                break;
            }
        }
    }

    cout << cnt;
    return 0;
}