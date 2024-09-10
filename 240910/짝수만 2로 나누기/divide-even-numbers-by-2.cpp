#include <iostream>
using namespace std;

void ModiftyArray(int *x, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(x[i] % 2 == 0)
        {
            x[i] = x[i] / 2;
        }
    }
}

void PrintArray(int *x, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
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

    ModiftyArray(arr, n);
    PrintArray(arr, n);
    return 0;
}