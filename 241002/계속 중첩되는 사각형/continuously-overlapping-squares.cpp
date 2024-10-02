#include <iostream>
using namespace std;

#define MAX_N 100
#define MAX_R 200
#define OFFSET 100

int x1[MAX_N], y1[MAX_N];
int x2[MAX_N], y2[MAX_N];
int checked[MAX_R + 1][MAX_R + 1];

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        x1[i] += OFFSET;
        y1[i] += OFFSET;
        x2[i] += OFFSET;
        y2[i] += OFFSET;
    }

    for(int i = 0; i < n; i++)
    {
        for(int x = x1[i]; x < x2[i]; x++)
        {
            for(int y = y1[i]; y < y2[i]; y++)
            {
                checked[x][y] = (i + 1) % 3;
            }
        }
    }

    int area = 0;
    for(int x = 0; x <= MAX_R; x++)
    {
        for(int y = 0; y <= MAX_R; y++)
        {
            if(checked[x][y] == 2)
                area++;
        }
    }
    cout << area;
    return 0;
}