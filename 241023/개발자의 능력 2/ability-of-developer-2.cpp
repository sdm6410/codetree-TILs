#include <iostream>
#include<algorithm>
#include <climits>
using namespace std;

int main() {
    int arr[6];
    for(int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 6);

    int max_ = 0;
    int min_ = INT_MAX;
    for(int i = 0; i < 3; i++)
    {
        int num = arr[i] + arr[5 - i];
        if(max_ < num)
            max_ = num;
        
        if(min_ > num)
            min_ = num;
    }

    cout << max_ - min_;
    return 0;
}