#include <iostream>
using namespace std;
void PrintStar(int n, int end)
{
    if(n == end + 1)
    {
        return;
    }
    for(int i = 1; i <= n; i++)
    {
        cout << "*";
    }
    cout << endl;
    PrintStar(n + 1, end);
}
int main() {
    int n;
    cin >> n;
    PrintStar(1, n);
    return 0;
}