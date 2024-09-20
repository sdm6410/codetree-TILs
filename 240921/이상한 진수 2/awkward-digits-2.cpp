#include <iostream>
#include <climits>

using namespace std;

int main()
{
    string bin;
    cin >> bin;

    int ans = INT_MIN;
    for(int i = 0; i < (int)bin.size(); i++)
    {
        bin[i] = '0' + '1' - bin[i];
        int num = 0;
        for(int j = 0; j < (int)bin.size(); j++)
        {
            num = num * 2 + (bin[j] - '0');
        }

        ans = max(ans, num);

        bin[i] = '0' + '1' - bin[i];
    }
    cout << ans;

}