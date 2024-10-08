#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n);
    vector<int> b(m);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    int cnt = 0;
    
    // 시작점 잡기
    for (int i = 0; i <= n - m; i++) {
        vector<int> sub_a(a.begin() + i, a.begin() + i + m);
        sort(sub_a.begin(), sub_a.end());
        sort(b.begin(), b.end());
        
        if (sub_a == b) {
            cnt++;
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}