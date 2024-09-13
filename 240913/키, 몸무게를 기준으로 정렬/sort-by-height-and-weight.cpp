#include <iostream>
#include <algorithm>
using namespace std;

class Student
{
    public:
        string name;
        int w, h;
    Student(){}
    Student(string name, int w, int h)
    {
        this->name = name;
        this->w = w;
        this->h = h;
    }
};

bool cmp(Student a, Student b)
{
    if(a.w == b.w)
    {
        return a.h > b.h;
    }
    return a.w < b.w;
}

int main() {
    int n;
    cin >> n;
    Student s[n];
    for(int i = 0; i < n; i++)
    {
        string name;
        int w, h;
        cin >> name >> w >> h;
        s[i] = Student(name, w, h);
    }

    sort(s, s+n, cmp);

    for(int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].w << " " << s[i].h << endl;
    }
    return 0;
}