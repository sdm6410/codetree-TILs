#include <iostream>
using namespace std;

int main() {
    int hour1, min1, hour2, min2;
    cin >> hour1 >> min1 >> hour2 >> min2;
    int elapsed_time = 0;
    while(true)
    {
        if(hour1 == hour2 && min1 == min2)
        {
            break;
        }

        elapsed_time++;
        min1++;

        if(min1 == 60)
        {
            hour1++;
            min1 = 0;
        }
    }

    cout<< elapsed_time;
    return 0;
}