#include <iostream>
using namespace std;

int main() {
    int month1, day1, month2, day2;
    int num_of_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cin >> month1 >> day1 >> month2 >> day2;
    int sum = 1;
    for(int i = month1; i < month2; i++)
    {
        sum += num_of_days[i-1];
    }
    sum -= day1;
    sum += day2;
    cout << sum;
    return 0;
}