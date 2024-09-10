#include <iostream>
using namespace std;

void PrintStar(int n)
{
    if(n == 0)
        return;
    cout << n << " ";
    PrintStar(n -1);
    cout << n << " ";
}

int main() {
    int n;
    cin >> n;
    PrintStar(n);
    return 0;
}