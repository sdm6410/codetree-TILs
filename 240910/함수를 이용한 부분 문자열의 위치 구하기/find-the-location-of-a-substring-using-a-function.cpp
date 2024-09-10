#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    string c;
    cin >> str;
    cin >> c;
    int n = str.find(c);
    if(n > 1005)
        cout << "-1";
    else
    {
        cout << n;
    }
    return 0;
}