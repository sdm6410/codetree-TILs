#include <iostream>
using namespace std;

int days_of_months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int cal(int m, int d) {
    int month = 1, day = 1, elapsed_day = 0;

    while (true) {
        if (month == m && day == d) {
            break;
        }
        elapsed_day++;
        day++;

        if (day > days_of_months[month]) {
            month++;
            day = 1;
        }
    }
    return elapsed_day;
}

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int first = cal(m1, d1);
    int second = cal(m2, d2);

    int diff;
    if (second > first) {
        diff = second - first;
        switch (diff % 7) {
            case 0: cout << "Mon" << endl; break;
            case 1: cout << "Tue" << endl; break;
            case 2: cout << "Wed" << endl; break;
            case 3: cout << "Thu" << endl; break;
            case 4: cout << "Fri" << endl; break;
            case 5: cout << "Sat" << endl; break;
            case 6: cout << "Sun" << endl; break;
        }
    } else {
        diff = first - second;
        switch (diff % 7) {
            case 0: cout << "Mon" << endl; break;
            case 1: cout << "Sun" << endl; break;
            case 2: cout << "Sat" << endl; break;
            case 3: cout << "Fri" << endl; break;
            case 4: cout << "Thu" << endl; break;
            case 5: cout << "Wed" << endl; break;
            case 6: cout << "Tue" << endl; break;
        }
    }

    return 0;
}