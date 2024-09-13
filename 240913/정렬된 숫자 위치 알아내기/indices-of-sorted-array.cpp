#include <iostream>
#include <algorithm>
using namespace std;
class Num
{
    public:
        int num, index;
    Num(){}
    Num(int num, int index)
    {
        this->num = num;
        this->index = index;
    }
};

bool cmp(Num a, Num b)
{
    if(a.num == b.num)
        return a.index < b.index;
    return a.num < b.num;
}

int main() {
    int n;
    cin >> n;
    Num num[n];
    for(int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        num[i] = Num(number, i + 1);
    }

    sort(num, num + n, cmp);

    Num num2[n];

    for(int i = 0; i < n; i++)
    {
        int index = num[i].index;
        num2[i] = Num(index, i + 1); 
    }
    sort(num2, num2 + n, cmp);

    for(int i = 0; i < n; i++)
    {
        cout << num2[i].index << " ";
    }

    return 0;
}