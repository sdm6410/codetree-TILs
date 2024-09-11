#include <iostream>
using namespace std;
int cnt = 0;
void F(int n)
{
    if(n == 1)
        return;
    if(n % 2 == 0)
    {
        F(n / 2);
        cnt++;

    }
    else
    {
        F(n / 3);
        cnt++;
    }
}
int main() {
    int n;
    cin >> n;
    F(n);
    cout << cnt;
    return 0;
}