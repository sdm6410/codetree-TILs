#include <iostream>
using namespace std;
int n, m;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int main() {
    cin >> n >> m;
    int arr[n][n] = {0};
    for(int i = 0; i < m; i++)
    {
        int r, c;
        cin >> r >> c;
        arr[r-1][c-1] = 1;
        int cnt = 0;
        for(int j = 0; j < 4; j++)
        {
            int x = dx[j];
            int y = dy[j];
            if(arr[r-1+x][c-1+y] == 1)
            {
                cnt++;
            }
        }

        if(cnt >= 3)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

   
    return 0;
}