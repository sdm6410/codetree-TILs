#include <iostream>
#define OFFSET 100
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[205][205] = {};
    for(int i = 0; i < n; i++)
    {
        int x1, y1, x2, y2, lx, ly;
        cin >> x1 >> y1 >> x2 >> y2;
        lx = (x2 + OFFSET) - (x1 + OFFSET);
        ly = (y2 + OFFSET) - (y1 + OFFSET);

        for(int i = x1; i < x1 + lx; i++)
        {
            for(int j = y1; j < y1 + ly; j++)
            {
                arr[i][j] = 1;
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i < 205; i++)
    {
        for(int j = 0; j < 205; j++)
        {            
            if(arr[i][j] > 0)
            {
                cnt+=1;
            }
        }
    }
    cout << cnt;
    return 0;
}