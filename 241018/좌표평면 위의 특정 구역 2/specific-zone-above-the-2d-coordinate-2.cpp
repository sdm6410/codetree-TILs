#include <iostream>
using namespace std;
#define MAX_N 100
int n;
int x[MAX_N], y[MAX_N];

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x_, y_;
        cin >> x_ >> y_;
        x[i] = x_;
        y[i] = y_;
    }

    int ans = 40001 * 40001;

    for(int i = 0; i < n; i++)
    {
        int max_x = 0, min_x = 40001, max_y = 0, min_y = 40001;

        for(int j = 0; j < n; j++)
        {
            if(i == j)
                continue;

            if(max_x < x[j])
                max_x = x[j];
            
            if(min_x > x[j])
                min_x = x[j];

            if(max_y < y[j])
                max_y = y[j];
            
            if(min_y > y[j])
                min_y = y[j];


        }
        ans = min(abs(max_x - min_x) * abs(max_y - min_y), ans);
    }
    cout << ans;
    return 0;
}