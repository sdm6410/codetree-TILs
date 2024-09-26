#include <iostream>
using namespace std;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int nx, ny;
int x = 0;
int y = 0;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        char c;
        int d;
        cin >> c >> d;
        if(c == 'N')
        {
            x = x + dx[1];
            y = y + d * dy[1];
        }
        else if(c == 'W')
        {
            x = x + d * dx[2];
            y = y + dy[2];
            
        }
        else if(c == 'S')
        {
            x = x + dx[3];
            y = y + d * dy[3];
        }
        else if(c == 'E')
        {
            x = x + d * dx[0];
            y = y + dy[0];
        }

    }

    cout << x << " " << y;
    return 0;
}