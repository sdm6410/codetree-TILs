#include <iostream>
#include <string>
using namespace std;
int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};



int main() {
    string str;
    cin >> str;
    int ans = -1;
    int x = 0, y = 0;
    int dir = 0;
    int elp_time = 0;
    bool flag = false;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'L')
        {
            dir = (3 + dir) % 4;
        }
        else if(str[i] == 'R')
        {
            dir = (dir + 1) % 4;
            
        }
        else
        {
            x = x + dx[dir];
            y = y + dy[dir];
            flag = true;

        }
        elp_time++;
        if(flag)
        {
            if(x == 0 && y == 0)
            {
                ans = elp_time;
                break;
            }
        }
        
    }

    cout << ans;
    return 0;
}