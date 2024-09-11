#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr1[n];
    int arr2[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for(int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);
    bool flag = true;
    for(int i = 0; i < n; i++)
    {
        if(arr1[i] != arr2[i])
        {
            flag = false;
            break;
        }
    }

    if(flag)
        cout << "Yes";
    else
    {
        cout << "No";
    }
    return 0;
}