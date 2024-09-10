#include <iostream>
using namespace std;

int Sum(int *arr,int a, int b)
{
    int sum = 0;
    for(int i = a; i <= b; i++)
    {
        sum += arr[i-1];
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

    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << Sum(arr, a, b) << endl;
    }
    return 0;
}