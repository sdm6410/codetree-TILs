#include <iostream>
#include <string>
using namespace std;
bool alph(string str)
{
    int n = str.length();
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(str[i] != str[j])
            {
                return true;
            }
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