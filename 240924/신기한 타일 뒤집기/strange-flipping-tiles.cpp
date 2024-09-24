#include <iostream>
#define MAX_K 100000
using namespace std;

int n;
int a[2 * MAX_K + 1];
int b, w;

int main()
{
    cin >> n;

    int cur = MAX_K;
    for(int i = 1; i <= n; i++)
    {
        int x;
        char c;
        cin >> x >> c;
        if(c == 'L')
        {
            while(x--)
            {
                a[cur] = 1;
                if(x) cur--;
            }
        }
        else
        {
            while(x--)
            {
                a[cur] = 2;
                if(x) cur++;
            }
        }
    }

    for(int i = 0; i <= 2 * MAX_K; i++)
    {
        if(a[i] == 1) w++;
        if(a[i] == 2) b++;
    }

    cout << w << " " << b;
    return 0;
}