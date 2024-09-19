#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int cnt = 0;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '(')
        {
            for(int j = i; j < str.length(); j++)
            {
                if(str[j] == ')')
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}