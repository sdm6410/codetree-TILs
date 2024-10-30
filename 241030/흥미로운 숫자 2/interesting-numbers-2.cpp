#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool is_interesting(string str)
{
    
    for(int i = 0; i < str.length(); i++)
    {
        int cnt = 0;
        for(int j = 0; j < str.length(); j++)
        {
            if(str[i] == str[j])
            {
                cnt++;
            }
        }

        if(cnt == str.length() - 1)
        {
            return true;
        }
    }
    return false;
}



int main() {
    int x, y;
    cin >> x >> y;

    int cnt = 0;

    for (int i = x; i <= y; i++) {
        if (is_interesting(to_string(i))) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}