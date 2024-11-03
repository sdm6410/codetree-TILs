#include <iostream>
#include <algorithm>

using namespace std;

int a, b, c;
int main()
{
    cin >> a >> b >> c;
    int ans = 0;
    for(int i = 0; i * a <= c; i++)
    {
        int cnt = a * i;
        int num_b = (c - cnt) / b;
        cnt += num_b * b;
        ans = max(ans, cnt);
    }

    cout << ans;
    return 0;
}