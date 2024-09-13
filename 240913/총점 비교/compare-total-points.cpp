#include <iostream>
#include <algorithm>
using namespace std;

class Student
{
    public:
        string name;
        int kor, eng, math;
    Student() {}
    Student(string name, int kor, int eng, int math)
    {
        this->name = name;
        this->kor = kor;
        this->eng = eng;
        this->math = math;
    }
    
};

bool cmp(Student a, Student b)
{
    return a.kor + a.eng + a.math < b.kor + b.eng + b.math;
}

int main() {
    int n;
    cin >> n;
    Student s[n];
    for(int i = 0; i < n; i++)
    {
        string name;
        int kor, eng, math;
        cin >> name >> kor >> eng >> math;
        s[i] = Student(name, kor, eng, math);
    }

    sort(s, s + n, cmp);

    for(int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].kor << " " << s[i].eng << " " << s[i].math << endl;
    }
    return 0;
}