#include <iostream>
using namespace std;
#define MAX_N 20
int n;
int arr_x[MAX_N], arr_y[MAX_N];

bool findPoint(int x, int y, int z)
{
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr_x[i] == x || arr_y[i] == x || arr_x[i] == y || arr_y[i] == y || arr_x[i] == z || arr_y[i] == z)
        {
            cnt++;
        }
    }
    if(cnt == n)
        return true;
    return false;
}

int main() {
    int ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr_x[i] >> arr_y[i];
    }

    for(int i = 0; i <= 10; i++)
    {
        for(int j = 0; j <= 10; j++)
        {
            for(int z = 0; z <= 10; z++)
            {
                if(findPoint(i, j, z))
                    ans = 1;
            }
        }
    }

    cout << ans;
    return 0;
}