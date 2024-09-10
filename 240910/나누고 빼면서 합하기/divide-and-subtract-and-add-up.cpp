#include <iostream>
using namespace std;

int Func(int *arr, int n, int m)
{
    int sum = 0;
    while(m > 0)
    {
        sum += arr[m - 1];
        if(m % 2 == 0)
        {
            m = m / 2;
        }
        else
        {
            m = m -1;
        }
    }

    return sum;
}

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << Func(arr, n, m);
    return 0;
}