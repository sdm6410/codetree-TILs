#include <iostream>
#include <algorithm>

using namespace std;
class Student
{
    public:
        int w, h, index;
    Student(){}
    Student(int h, int w, int index)
    {
        this->h = h;
        this->w = w;
        this->index = index;
    }
};

bool cmp(Student a, Student b)
{
    if(a.h == b.h)
        return a.w > b.w;
    return a.h < b.h;
}
int main() {
    int n;
    cin >> n;
    Student s[n];
    for(int i = 0; i < n; i++)
    {
        int h, w;
        cin >> h >> w;
        s[i] = Student(h, w, i + 1);
    }

    sort(s, s + n, cmp);

    for(int i = 0; i < n; i++)
    {
        cout << s[i].h << " " << s[i].w << " " << s[i].index << endl;
    }
    return 0;
}