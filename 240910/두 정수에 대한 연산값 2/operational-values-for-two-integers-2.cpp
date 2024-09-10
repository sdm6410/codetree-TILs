#include <iostream>
using namespace std;

void Modify(int &a, int &b)
{
    if(a > b)
    {
        a = a * 2;
        b = b + 10;
    }
    else
    {
        a = a + 10;
        b = b * 2;
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    Modify(a, b);
    cout << a << " " << b;
    return 0;
}