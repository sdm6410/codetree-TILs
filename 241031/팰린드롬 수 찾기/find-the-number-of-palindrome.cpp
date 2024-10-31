#include <iostream>
using namespace std;

int x, y;

bool isPalindrome(string str)
{
    bool flag = true;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] != str[str.size() - 1 - i])
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int main() {
    cin >> x >> y;
    int cnt = 0;
    for(int i = x; i <= y; i++)
    {
        if(isPalindrome(to_string(i)))
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}