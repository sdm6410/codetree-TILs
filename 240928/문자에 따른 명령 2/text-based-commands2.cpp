#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int x = 0, y = 0;
    int cnt = 0;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'L')
        {
            cnt = (cnt + 3) % 4;
        }
        else if(str[i] == 'R')
        {
            cnt = (cnt + 1) % 4;
        }
        else
        {
            x = x + dx[cnt];
            y = y + dy[cnt];
        }
    }

    cout << x << " " << y;
    return 0;
}