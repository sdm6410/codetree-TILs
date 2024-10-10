#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 100
int arr[MAX_N];
int n, h, t;

int main() {
    cin >> n >> h >> t;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min_ = 9999999999999;
    for(int i = 0; i < n - t + 1; i++)
    {
        int cnt = 0;
        for(int j = i; j < t + i; j++)
        {
            cnt += abs(h - arr[j]);
        }

        min_ = min(min_, cnt);
    }

    cout << min_;
    return 0;
}