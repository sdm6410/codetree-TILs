#include <iostream>
using namespace std;
int Pow(int n)
{
    int sum = 0;
    string str = to_string(n);
    for(int i = 0; i < str.length(); i++)
    {
        sum += (str[i] - '0') * (str[i] - '0');
    }
    return sum;
}
int main() {
    int n;
    cin >> n;
    cout << Pow(n);
    return 0;
}