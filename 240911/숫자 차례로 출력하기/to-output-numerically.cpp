#include <iostream>
using namespace std;
int num;
void PrintStar(int n)
{
    if(n == num + 1)
    {
        cout << endl;
        return;
    }
    cout << n << " ";
    PrintStar(n + 1);
    cout << n << " ";
}

int main() {
    int n;
    cin >> n;
    num = n;
    PrintStar(1);
    return 0;
}