#include <iostream>
#include <algorithm>

using namespace std;


void PrintArray(int *arr, int n)
{
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 1)
        {
            int temp[i];
            for(int j = 0; j < i; j++)
            {
                temp[j] = arr[j];
            }
            sort(temp , temp + i);

            cout << temp[i / 2] << " ";
        }
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

    PrintArray(arr, n);
    return 0;
}