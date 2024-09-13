#include <iostream>
#include <algorithm>
using namespace std;

class Student
{
    public:
        string name;
        int kor, eng, math;
        Student(){}
        Student(string name, int kor, int eng, int math) {
            this->name = name;
            this->kor = kor;
            this->eng = eng;
            this->math = math;
        }
};

bool cmp(Student a, Student b)
{
    if(a.kor == b.kor)
    {
        if(a.eng == b.eng)
        {
            return a.math > b.math;
        }
        return a.eng > b.eng;
    }    
    return a.kor > b.kor; 
}

int main() {
    int n;
    cin >> n;

    Student student[n];

    for(int i = 0; i < n; i++)
    {
        string name;
        int kor, eng, math;
        cin >> name >> kor >> eng >> math;

        student[i] = Student(name, kor, eng, math);
    }

    sort(student, student + n, cmp);

    for(int i = 0; i < n; i++)
    {
        cout << student[i].name << " " << student[i].kor << " " << student[i].eng << " " << student[i].math << endl;
    }
    return 0;
}