#include <iostream>
using namespace std;

int F(int n)
{
    if(n == 1)
        return 1;
    return F(n - 1) * n;
}
int main() {
    int n;
    cin >> n;
    cout << F(n);
    return 0;
}