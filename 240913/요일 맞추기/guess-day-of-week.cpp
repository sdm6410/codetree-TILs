#include <iostream>
using namespace std;
#define DAY 
int main() {
    int m1, d1, m2, d2;
    int num_of_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> m1 >> d1 >> m2 >> d2;
    string day[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int sum = 0;
    for(int i = m1; i < m2; i++)
    {
        sum += num_of_days[i-1];
    }
    sum += d2;
    sum -= d1;

    if(sum < 0)
    {
        while(sum < 0)
        {
            sum += 7;
        }
    }
    else
    {
        sum %= 7;
    }


    cout << day[sum];
    return 0;
}