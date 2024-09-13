#include <iostream>
#include <algorithm>
using namespace std;
class Student
{
    public:
        int h, w, n;
    Student(){}
    Student(int h, int w, int n)
    {
        this->h =h;
        this->w = w;
        this->n = n;
    }
        
};
bool cmp(Student a, Student b)
{
    if(a.h == b.h)
    {
        if(a.w == b.w)
        {
            return a.n < b.n;
        }
        return a.w > b.w;
    }
    return a.h > b.h;
}

int main() {
    int n;
    cin >> n;
    Student s[n];
    for(int i = 0; i < n; i++)
    {
        int h, w, n = 1;
        cin >> h >> w;
        s[i] = Student(h, w, i+1);
    }

    sort(s, s + n, cmp);

    for(int i = 0; i < n; i++)
    {
        cout << s[i].h << " " << s[i].w << " " << s[i].n << endl;
    }
    return 0;
}