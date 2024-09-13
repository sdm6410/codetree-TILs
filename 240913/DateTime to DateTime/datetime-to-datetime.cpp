#include <iostream>
using namespace std;

int main() {
    int a1, b1, c1;
    cin >> a1 >> b1 >> c1;
    int a2 = 11, b2 = 11, c2 = 11;
    int totalTime = (a1 * 24 * 60 + b1 * 60 + c1) - (a2 * 24 * 60 + b2 * 60 + c2);
    if(totalTime < 0)
    {
        cout << -1;
    }
    else
    {
        cout << totalTime;
    }
    return 0;
}