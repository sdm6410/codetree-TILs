#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int max_cnt = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 2; j++)
        {
            max_cnt = max(max_cnt, arr[i][j] + arr[i][j + 1] + arr[i][j + 2]);
        }
    }
    cout << max_cnt;
    return 0;
}