#include <iostream>
using namespace std;

bool InRange(int x, int y)
{
    return (0 <= x && x < 5 && 0 <= y && y < 5);
}

int main() {
    int n;
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
    int x = 0;
    int y = 0; 
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int cnt = 0;
            for(int z = 0; z <5; z++)
            {

                x = i + dx[z];
                y = j + dy[z];
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