#include <iostream>
#include <string>
using namespace std;

class Bomb
{
    public:
        string code;
        string color;
        int time;
    Bomb()
    {

    }

    Bomb(string pCode, string pColor, int pTime)
    {
        this->code = pCode;
        this->color = pColor;
        this->time = pTime;
    }
};

int main() {
    string code;
    string color;
    int time;
    cin >> code >> color >> time;
    Bomb b = Bomb(code, color, time);
    cout << "code : " << b.code << endl;
    cout << "color : " << b.color << endl;
    cout << "second : " << b.time;
    return 0;
}