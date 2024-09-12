#include <iostream>
#include <algorithm>

using namespace std;

void PrintArray(int *arr, int n)
{
    for(int i = 0; i < n / 2 + 1; i++)
    {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    PrintArray(arr, n);
    return 0;
}