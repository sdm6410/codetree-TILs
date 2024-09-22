#include <iostream>
#include <climits>
#include <algorithm>
#include <cstdlib>
#define MAX_N 1003

using namespace std;

int n;
int a[MAX_N];

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        int sum_dist = 0;
        for(int j = 0; j < n; j++)
        {
            int dist = (j + n - i) % n;
            sum_dist += dist * a[j];
        }

        ans = min(ans, sum_dist);
    }

    cout << ans;
}