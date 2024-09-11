#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    int prob;
    cin >> a >> b >> c;
    prob = a * b * c;
    string str = to_string(prob);
    int sum = 0;
    for(int i = 0; i < str.length(); i++)
    {
        sum += str[i] - '0';
    }
    cout << sum;
    return 0;
}