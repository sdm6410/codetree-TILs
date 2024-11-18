#include <iostream>
#include <climits>
using namespace std;

int n;

int main() {
    cin >> n;
    int arr[n];
    int index, temp, min;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n -1; i++)
    {
        min = INT_MAX;
        for(int j = i; j < n; j++)
        {
            if(arr[j] < min)
            {
                min = arr[j];
                index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}