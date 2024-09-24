#include <iostream>
using namespace std;
#define MAX 200
#define OFFSET 100
int main() {
    int n;
    cin >> n;
    int arr[MAX][MAX] = {0};
    for(int i = 0; i < n; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for(int i = x1; i <= x2 - 1; i++)
        {
            for(int j = y1; j <= y2 - 1; j++)
            {
                arr[OFFSET + i][OFFSET + j]++;
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i < MAX; i++)
    {
        for(int j = 0; j < MAX; j++)
        {
            if(arr[i][j] >= 1)
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}