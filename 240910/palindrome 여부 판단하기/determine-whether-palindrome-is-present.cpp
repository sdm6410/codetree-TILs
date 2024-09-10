#include <iostream>
#include <string>
using namespace std;
void Palindrome(string &str)
{
    int len = str.length();
    for(int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

}

bool sameCheck(string str, string temp)
{
    if(str == temp)
    {
        return true;
    }
    return false;
}

int main() {
    string str;
    cin >> str;
    string temp = str;
    Palindrome(temp);
    if(sameCheck(str, temp))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}