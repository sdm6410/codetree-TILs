#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int num = 0;
    for(int i = 0; i < str.length(); i++)
    {
        num = num * 2 + (str[i] - '0');
    }
    cout << num;
    return 0;
}