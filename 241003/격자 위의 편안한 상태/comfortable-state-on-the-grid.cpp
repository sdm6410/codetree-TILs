#include <iostream>
using namespace std;
int n, m;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

bool InRange(int x, int y){
    return 0 <= x && x < n && 0 <= y && y < m;
}



int main() {
    cin >> n >> m;
    int arr[n + 1][n + 1] = {0};
    for(int i = 0; i < m; i++)
    {
        int r, c;
        cin >> r >> c;
        arr[r][c] = 1;
        int cnt = 0;
        for(int j = 0; j < 4; j++)
        {
            int x = r + dx[j];
            int y = c + dy[j];
           
            if(InRange(x, y) &&arr[x][y] == 1)
            {
                cnt++;
            }
        }

        if(cnt == 3)
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