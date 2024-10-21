#include <iostream>
#include <algorithm>
using namespace std;

int n;


int main()
{   
    int max_cnt = 0;
    cin >> n;
    int workTime[n][2] = {};
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        workTime[i][0] = a;
        workTime[i][1] = b;
    }
    for(int i = 0; i < n; i++)
    {
        bool checked[1001] = {};

        for(int j = 0; j < n; j++)
        {
            if(i == j)
                continue;
            int x1 = workTime[j][0];
            int x2 = workTime[j][1];
            for(int z = x1; z < x2; z++)
            {
                checked[z] = true;
            }
            int cnt = 0;
            for(int z = 0; z < 1001; z++)
            {
                if(checked[z] == 1)
                    cnt++;
            }
            max_cnt = max(max_cnt, cnt);
        }
    }
    cout << max_cnt;
    return 0;
}