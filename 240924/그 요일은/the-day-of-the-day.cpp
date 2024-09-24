#include <iostream>
#include <string>
using namespace std;
int dayToNum(string str)
{
    if(str == "Mon")
    {
        return 0;
    }
    else if(str == "Tue")
    {
        return 1;
    }
    else if(str == "Wed")
    {
        return 2;
    }
    else if(str == "Thu")
    {
        return 3;
    }
    else if(str == "Fri")
    {
        return 4;
    }
    else if(str == "Sat")
    {
        return 5;
    }
    else
    {
        return 6;
    }
}
int main() {
    int months[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int m1, d1, m2, d2;
    string day;
    cin >> m1 >> d1 >> m2 >> d2 >> day;
    int before = 0;
    for(int i = 0; i < m1 -1; i++)
    {
        before += months[i];
    }
    before += d1;

    int after = 0;
    for(int i = 0; i < m2 - 1; i++)
    {
        after += months[i];
    }

    after += d2;

    int num = dayToNum(day);
    int bb = before / 7;
    int bD = before % 7;

    if(bD > num)
    {
        bb += 1;
    }

    int ab = after / 7;
    int aD = after % 7;
    if(aD > num)
    {
        ab += 1;
    }
    cout << ab - bb;
    return 0;
}