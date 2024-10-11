#include <iostream>
#include <cstdlib>
#include <climits>
#include <algorithm>
#define MAX_N 6
using namespace std;

int numbers[MAX_N];

int GetDiff(int a, int b, int c)
{
    int sum1 = numbers[a] + numbers[b] + numbers[c];
    int sum2 = 0;
    for(int k = 0; k < 6; k++)
        sum2 += numbers[k];
    sum2 -= sum1;
    return abs(sum1 - sum2);
}

int main() {
    for(int i = 0; i < 6; i++)
    {
        cin >> numbers[i];
    }
    int min_diff = INT_MAX;
    for(int i = 0; i < 6; i++)
    {
        for(int j = i + 1; j < 6; j++)
        {
            for(int z = j + 1; z < 6; z++)
            {
                min_diff = min(min_diff, GetDiff(i, j, z));
            }
        }
    }
    cout << min_diff;
    return 0;
}