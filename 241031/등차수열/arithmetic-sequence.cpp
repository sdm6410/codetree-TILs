#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 101
int n;
int a[MAX_N];

bool isSame(int a, int k, int b)
{
    return (a - k) == (k - b);
}

int simulate(int k)
{
    int cur_n = 0;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(isSame(a[i], k, a[j]))
                cur_n++;
        }
    }
    return cur_n;
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int a_min = *min_element(a, a + n);
    int a_max = *max_element(a, a + n);

    int max_n = 0;
    for(int i = a_min; i <= a_max; i++)
    {
        max_n = max(max_n, simulate(i));
    }

    cout << max_n;
    return 0;
}