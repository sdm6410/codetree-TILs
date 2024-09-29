#include <iostream>
using namespace std;
int n;

bool InRange(int x, int y)
{
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    cin >> n;
    int arr[n][n];
    int answer = 0;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int cnt = 0;
            for(int z = 0; z < 4; z++)
            {

                int x = i + dx[z];
                int y = j + dy[z];
                if(InRange(x,y) && arr[x][y] == 1)
                {
                    cnt++;
                }
            }

            if(cnt >= 3)
            {
                answer++;
            }
        }
    }
    cout << answer;
    return 0;
}