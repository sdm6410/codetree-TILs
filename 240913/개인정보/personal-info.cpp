#include <iostream>
#include <algorithm>
using namespace std;

class PersonInfo
{
    public:
        string name;
        int h;
        double w;
    PersonInfo(){}
    PersonInfo(string name, int h, double w)
    {
        this->name = name;
        this->h = h;
        this->w = w;
    }
};

bool cmp1(PersonInfo a, PersonInfo b)
{
    return a.name < b.name;
}

bool cmp2(PersonInfo a, PersonInfo b)
{
    return a.h > b.h;
}


int main() {
    PersonInfo p[5];
    for(int i = 0; i < 5; i++)
    {
        string name;
        int h;
        double w;
        cin >> name >> h >> w;
        p[i] = PersonInfo(name, h, w);
    }

    sort(p, p + 5, cmp1);
    cout << "name" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << p[i].name << " " << p[i].h << " " << p[i].w << endl;
    }

    sort(p, p + 5, cmp2);
    cout << endl;
    cout << "height" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << p[i].name << " " << p[i].h << " " << p[i].w << endl;
    }
    return 0;
}