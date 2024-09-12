#include <iostream>
using namespace std;

class Quest
{
    public:
        string code;
        string spot;
        int time;
    Quest(string code, string spot, int time)
    {
        this->code = code;
        this->spot = spot;
        this->time = time;
    }
};

int main() {
    string strCode;
    string strSpot;
    int nTime;
    cin >> strCode >> strSpot >> nTime;
    Quest q1 = Quest(strCode, strSpot, nTime);
    cout << "secret code : " << q1.code << endl;
    cout << "meeting point : " << q1.spot << endl;
    cout << "time : " << q1.time << endl;
    return 0;
}