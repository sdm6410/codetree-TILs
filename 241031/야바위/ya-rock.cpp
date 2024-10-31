#include <iostream>
using namespace std;
#define MAX_N 101
int n;
int a[MAX_N], b[MAX_N], c[MAX_N];
int main() {
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    
    int max_cnt = 0;
    for(int start = 1; start <= 3; start++)
    {
        int cnt = 0;
        bool coin[3] = {0};
        coin[start - 1] = true;
        for(int i = 0; i < n; i++)
        {
            if(coin[a[i]] != coin[b[i]])
            {
                coin[a[i]] = !coin[a[i]];
                coin[b[i]] = !coin[b[i]];
            }

            if(coin[c[i]])
                cnt++;  
        }

        max_cnt = max(max_cnt, cnt);
    }
    cout << max_cnt;
    return 0;
}