#include <iostream>
#include <algorithm>
using namespace std;

int n, k;

int main() {
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    int max_ = 0;
    for(int i = 0; i < n - k + 1; i++)
    {
        for(int j = i; j < k + i; j++)
        {
            sum += arr[j];
        }
        if(sum > max_)
        {
            max_ = max(max_, sum);
        }
        sum = 0;
    }
    cout << max_;
    return 0;
}