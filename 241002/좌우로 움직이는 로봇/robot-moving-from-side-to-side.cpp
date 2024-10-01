#include <iostream>
#define MAX_T 1000000
using namespace std;
int n, m;
int pos_a[MAX_T + 1], pos_b[MAX_T + 1];
int main() {
    cin >> n >> m;
    int time_a = 1;
    for(int i = 0; i < n; i++)
    {
        int nA;
        char cDirA;
        cin >> nA >> cDirA;
        while(nA--)
        {
            if(cDirA == 'R')
                pos_a[time_a] = pos_a[time_a -1] + 1;
            else
                pos_a[time_a] = pos_a[time_a -1] - 1;
            time_a++;
        }
    }

    int time_b = 1;
    for(int i = 0; i < m; i++)
    {
        int nB;
        char cDirB;
        cin >> nB >> cDirB;
        while(nB--)
        {
            if(cDirB == 'R')
            {
                pos_b[time_b] = pos_b[time_b - 1] + 1;
            }
            else
                pos_b[time_b] = pos_b[time_b - 1] - 1;
            time_b++;
        }
    }

    int ans = -1;
    for(int i = 1; i < time_b; i++)
    {
        if(pos_a[i] == pos_b[i])
        {
            ans++;
        }
    }

    cout << ans;
    return 0;
}