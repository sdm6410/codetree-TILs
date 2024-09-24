#include <iostream>
#define MAX_R 1000
using namespace std;

int checked[202];

int main() {
    int n;
    cin >> n;
    int point = 101;
    for(int i = 0; i < n; i++)
    {
        int x;
        char c;
        cin >> x >> c;

        if(c == 'R')
        {
            for(int j = 0; j < x; j++)
            {
                checked[point + j]++;
            }

            point += x;
        }

        if(c == 'L')
        {
            for(int j = 1; j <= x; j++)
            {
                checked[point - j]++;
            }
            point -= x;
        }
        
    }

    int cnt = 0;
    for(int i = 0; i < 202; i++)
    {
        if(checked[i] >= 2)
        {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}