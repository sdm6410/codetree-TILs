#include <iostream>
#include <algorithm>
using namespace std;

class Data
{
    public:
        string date;
        string day;
        string weather;
    Data()
    {

    }
    Data(string date, string day, string weather)
    {
        this->date = date;
        this->day = day;
        this->weather = weather;
    }

    bool operator < (Data &data)
    {
        return this->date < data.date;
    }
};



int main() {
    int n;
    cin >> n;
    Data data[n];
    string date, day, weather;
    for(int i = 0; i < n; i++)
    {
        cin >> date >> day >> weather;
        data[i] = Data(date, day, weather);
    }
    sort(data, data + n);
    for(int i = 0; i < n; i++)
    {
        if(data[i].weather == "Rain")
        {
            cout << data[i].date << " " << data[i].day << " " << data[i].weather << endl;
            break;
        }
    }


    return 0;
}