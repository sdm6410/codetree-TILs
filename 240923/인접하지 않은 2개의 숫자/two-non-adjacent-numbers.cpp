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
    int sum = 0;
    int max = -999;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 2; j < n; j++)
        {
            sum = arr[i] + arr[j];
            if(sum > max)
            {
                max = sum;
            }
        }
    }

    cout << max;
    return 0;
}