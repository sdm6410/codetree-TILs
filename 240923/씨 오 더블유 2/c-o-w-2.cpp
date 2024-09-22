#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            for(int z = j + 1; z < n; z++)
            {
                if(arr[i] == 'C' && arr[j] == 'O' && arr[z]== 'W')
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}