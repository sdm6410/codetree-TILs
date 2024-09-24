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
    int cnt = 1;
    int max = 0;
    for(int i = 1; i <= n; i++)
    {
        if(arr[i] == arr[i - 1])
        {
            cnt++;
        }
        else
        {
            if(max < cnt)
            {
                max = cnt;
                cnt = 1;
            }
        }
    }
    cout << max;
    return 0;
}