#include <iostream>
using namespace std;
void Modify(int &a, int &b)
{
    if(a > b)
    {
        a = a + 25;
        b = b * 2;
    }
    else
    {
        a = a * 2;
        b = b + 25;
    }
}
int main() {
    int a, b;
    cin >> a >> b;
    Modify(a, b);
    cout << a << " " << b;
    return 0;
}