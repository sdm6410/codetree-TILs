#include <iostream>
using namespace std;
void absArr(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        arr[i] = abs(arr[i]);
    }
}

void PrintArr(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n] = {};
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    absArr(arr, n);

    PrintArr(arr, n);

    return 0;
}