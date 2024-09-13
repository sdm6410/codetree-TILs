#include <iostream>
using namespace std;
#define DAY 
int main() {
    int m1, d1, m2, d2;
    int num_of_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> m1 >> d1 >> m2 >> d2;
    string day[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int n = (m2 - m1) * 30 + d2 - d1;
    if(n < 0)
    {
        while(n < 0)
        {
            n += 7;
        }
    }
    else
    {
        while(n > 6)
        {
            n -= 7;
        }
    }


    cout << day[n];
    return 0;
}