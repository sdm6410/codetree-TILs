#include <iostream>
using namespace std;

int main() {
    int month1, day1, month2, day2;
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cin >> month1 >> day1 >> month2 >> day2;
    int sum = 0;
    for(int i = month1 + 1; i <= month2; i++)
    {
        sum += num_of_days[i];
    }
    sum = sum + day2 - day1;
    if(month1 == month2 && day1 == day2)
    {
        cout << 1;
    }
    else
    {
    cout << sum;

    }
    return 0;
}