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
        sum = arr[i] + arr[i + 1] + arr[i + 2];
        if(sum > max_)
        {
            max_ = max(max_, sum);
        }
    }
    cout << max_;
    return 0;
}