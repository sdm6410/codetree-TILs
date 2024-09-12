#include <iostream>
#include <algorithm>
using namespace std;

void SortArray(int *arr1, int *arr2, int n)
{
    sort(arr1, arr1 + n * 2);
    sort(arr2, arr2 + n * 2, greater<int>());
    int max = arr1[0];
    int sum = 0;
    for(int i = 0; i < n* 2; i++)
    {
        sum = arr1[i] + arr2[i];
        if(max < sum)
        {
            max = sum;
        }
    }
    cout << max;
}

int main() {
    int n;
    cin >> n;
    int arr1[n * 2];
    int arr2[n * 2];
    for(int i = 0; i < n * 2; i++)
    {  
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }
    
    SortArray(arr1, arr2, n);
    
    
    return 0;
}