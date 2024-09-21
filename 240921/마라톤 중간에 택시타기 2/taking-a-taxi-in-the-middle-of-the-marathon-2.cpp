#include <iostream>
#include <vector>
#include <cmath>
#include <climits>  

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    int ans = INT_MAX;
    
    for (int i = 1; i < n - 1; i++) {
        int dist = 0;
        int prev_idx = 0;
        
        for (int j = 1; j < n; j++) {
            if (j == i)
                continue;

            dist += abs(arr[prev_idx].first - arr[j].first) + abs(arr[prev_idx].second - arr[j].second);
            prev_idx = j;
        }
        
        ans = min(ans, dist);
    }

    cout << ans << endl;

    return 0;
}