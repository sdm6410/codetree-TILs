#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int prev = 0;
    int max = -999;
    bool flag = true;
    for(int i = 0; i < n; i++)
    {
        if(n == 1)
            max = 1;
        if(arr[i] != arr[i - 1])
            {
                flag = false;
                int total = i - prev;
                if(total > max)
                {
                    max = total;
                }
                prev = i;
            }
        
        
    }
    if(flag)
    {
        cout << n;
    }
    else
    {
        cout << max;

    }
    return 0;
}