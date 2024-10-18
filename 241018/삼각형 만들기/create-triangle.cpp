#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
#define MAX_N 100
int n;
int x_p[MAX_N], y_p[MAX_N];

int GetMax(int i1, int i2, int i3)
{
    return abs((x_p[i1] * y_p[i2] + x_p[i2] * y_p[i3] + x_p[i3] * y_p[i1]) - (x_p[i2] * y_p[i1] + x_p[i3] * y_p[i2] + x_p[i1] * y_p[i3]));
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        x_p[i] = x;
        y_p[i] = y;
    }
    int answer = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            for(int z = j + 1; z < n; z++)
            {
                if((x_p[i] == x_p[j] || x_p[j] == x_p[z] || x_p[z] == x_p[i]) && (y_p[i] == y_p[j] || y_p[j] == y_p[z] || y_p[z] == y_p[i]))
                    answer = max(GetMax(i, j, z), answer);
            }
        }
    }

    cout << answer;
    return 0;
}