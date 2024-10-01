#include <iostream>
#define DIR_NUM 4
using namespace std;

int n, x, y;

int dx[DIR_NUM] = {1, -1, 0, 0};
int dy[DIR_NUM] = {0, 0, -1, 1};

int ans = -1;
int elapsed_time;

bool Move(int dir, int dist)
{
    while(dist--)
    {
        x += dx[dir];
        y += dy[dir];

        elapsed_time++;

        if(x == 0 && y == 0)
        {
            ans = elapsed_time;
            return true;
        }
    }
    return false;
}

int main()
{
    cin >> n;

    while(n--)
    {
        char c_dir; int dist;
        cin >> c_dir >> dist;

        int dir;
        if(c_dir == 'E')
            dir = 0;
        else if(c_dir == 'W')
            dir = 1;
        else if(c_dir == 'S')
            dir = 2;
        else
            dir = 3;
        
        bool done = Move(dir, dist);

        if(done)
            break;
    }

    cout << ans;
    return 0;
}