#include <iostream>
using namespace std;
#define DAY 
int main() {
    int m1, d1, m2, d2;
    int num_of_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> m1 >> d1 >> m2 >> d2;
    string day[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int sum = 1;
    for(int i = month1; i < month2; i++)
    {
        sum += num_of_days[i-1];
    }
    sum += d2;
    sum -= d1;
    if(n < 0)
    {
        while(n < 0)
        {
            sum += 7;
        }
    }
    else
    {
        sum %= 7;
    }


    cout << day[n];
    return 0;
}