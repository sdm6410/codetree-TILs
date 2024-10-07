#include <iostream>
#define DIR_NUM 4
#define MAX_N 101
using namespace std;

int n, m;
char arr[MAX_N][MAX_N];

int dx[DIR_NUM] = {0, 1, 0, -1};
int dy[DIR_NUM] = {1, 0, -1, 0};

int curr_x, curr_y;
int dir = 0;

bool InRange(int x, int y)
{
    return 0 <= x && x < n && 0 <= y && y < m;
}

int main() {
    cin >> n >> m;
    arr[curr_x][curr_y] = 'A';

    for(int i = 2; i <= n * m; i++)
    {
        while(true)
        {
            int nx = curr_x + dx[dir];
            int ny = curr_y + dy[dir];

            if(InRange(nx, ny) && arr[nx][ny] == 0)
            {
                curr_x = nx;
                curr_y = ny;
                arr[curr_x][curr_y] = 'A' + i - 1;
                break;
            }else
            {
                dir = (dir + 3) % 4;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}