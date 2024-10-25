#include <iostream>
using namespace std;
#define MAX_N 100

int n, k;
int arr[MAX_N];
int main() {
    cin >> n >> k;
    int ans = -1;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            if(i == j)
                continue;
            if(arr[i] == arr[j])
                ans = max(ans, arr[i]);
        }
    }
    cout << ans;
    return 0;
}