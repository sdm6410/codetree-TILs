#include <iostream>
#include <algorithm>

#define MAX_NUM 100

using namespace std;

int n, k;
int arr[MAX_NUM + 1];

int main()
{
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        int x, a;
        cin >> a >> x;

        arr[x] += a;
    }

    int max_sum = 0;
    for(int i = 0; i <= MAX_NUM; i++)
    {
        int sum = 0;
        for(int j = i - k; j <= i + k; j++)
        {
            if(j >= 0 && j <= MAX_NUM)
                sum += arr[j];
        }

        max_sum = max(max_sum, sum);
    }
    cout << max_sum;
    return 0;
}