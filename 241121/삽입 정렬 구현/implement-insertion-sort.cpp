#include <iostream>
using namespace std;
#define MAX_N 100
int arr[MAX_N];
int n;
void insertSort(int a[])
{
    int key, i, j;
    for(int i = 1; i < n; i++)
    {
        key = a[i];
        for(j = i - 1; j >= 0 && a[j] > key; j--)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = key;
    }
}

int main() {

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertSort(arr);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}