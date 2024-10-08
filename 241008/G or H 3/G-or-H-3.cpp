#include <iostream>
#include <algorithm>
#define MAX_N 10000
using namespace std;

int n, k;
int placed[MAX_N + 1] = {0};
int main() {
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        int loc;
        char c;
        cin >> loc >> c;

        if(c == 'G')
        {
            placed[loc] = 1;
        }
        else
        {
            placed[loc] = 2;
        }
    }
    int max_sum = 0;
    for(int i = 1; i <= MAX_N - k; i++)
    {
        int sum = 0;
        for(int j = i; j <= i + k; j++)
        {
            sum += placed[j];
        }
        max_sum = max(max_sum, sum);
    }

    cout << max_sum;
    return 0;
}