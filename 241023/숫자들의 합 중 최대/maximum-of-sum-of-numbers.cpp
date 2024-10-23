#include <iostream>
using namespace std;

int x, y;

int main() {
    int max_ = 0;
    cin >> x >> y;
    for(int i = x; i <= y; i++)
    {
        int sum = 0;
        while(true)
        {
            if(x < 1)
            {
                break;
            }
            sum += x % 10;
            x /= 10;
        }

        max_ = max(max_, sum);
    }
    cout << max_;
    return 0;
}