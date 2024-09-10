#include <iostream>
#include <string>
using namespace std;
bool alph(string str)
{
    int len = str.length();
    for(int i = 0; i < len; i++)
    {
        if(str[i] != str[0])
        {
            return true;
        }
    }
    return false;
}
int main() {
    string str;
    cin >> str;
    if(alph(str))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}