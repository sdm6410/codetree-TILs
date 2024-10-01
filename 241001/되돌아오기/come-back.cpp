#include <iostream>
using namespace std;
int GetDir(char c)
{
    if(c == 'W')
    {
        return 0;
    }
    else if(c == 'S')
    {
        return 1;
    }
    else if(c == 'N')
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
int main() {
    int n;
    cin >> n;
    int x = 0, y = 0;
    int dx[4] = {-1, 0, 0, 1};
    int dy[4] = {0, -1, 1, 0};
    int cnt = 0;
    bool flag = false;

    for(int i = 0; i < n; i++)
    {
        char d;
        int s;
        cin >> d >> s;
        int dir = GetDir(d);
        for(int j = 0; j < s; j++)
        {
            x = x + dx[dir];
            y = y + dy[dir];
            cnt++;
            if(x == 0 && y == 0)
            {
                flag = true;
                break;
            }
        }

        if(flag)
            break;
    }
    if(flag)
    {
        cout << cnt;
    }   
    else
    {
        cout << -1;

    }
    return 0;
}