#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    int ans = 0;
    for(int i = 0; i < str.length() - 1; i++)
    {
        if(str[i] == '(' && str[i+1] == '(')
        {
            for(int j = i + 2; j < str.length() - 1; j++)
            {
                if(str[j] == ')' && str[j + 1] == ')')
                {
                    ans += 1;
                }
            }
        }
    }    
    cout << ans;
    return 0;
}