#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 1;
    int max_ = 0;
    for(int i = 0; i < n; i++)
    {
        if(i == 0 || arr[i] == arr[i - 1])
        {
            cnt++;
            max_ = max(max_,cnt);
        }
        else
        {
            cnt = 1;
        }
    }
    cout << max_;
    return 0;
}