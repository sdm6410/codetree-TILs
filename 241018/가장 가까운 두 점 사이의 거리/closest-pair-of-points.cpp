#include <iostream>
#include <climits>
using namespace std;
#define MAX_N 100
int n;
int x[MAX_N], y[MAX_N];
int main() {
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x_, y_;
        cin >> x_ >> y_;
        x[i] = x_;
        y[i] = y_;
    }   
    int ans = INT_MAX;
    for(int i = 0; i < n; i++)
    {

        for(int j = i + 1; j < n; j++)
        {
            int dis = abs(x[i] - x[j]) * abs(x[i] - x[j]) + abs(y[i] - y[j]) * abs(y[i] - y[j]);
            ans = min(dis, ans);
        }
    }

    cout << ans;
    return 0;
}