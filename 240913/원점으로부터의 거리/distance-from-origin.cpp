#include <iostream>
#include <algorithm>
using namespace std;

class Point
{
    public:
        int x, y, n;
    Point(){}
    Point(int x, int y, int n)
    {
        this->x = x;
        this->y = y;
        this->n = n;
    }
};

bool cmp(Point a, Point b)
{
    int dis1 = abs(a.x - 0) + abs(a.y - 0);
    int dis2 = abs(b.x - 0) + abs(b.y - 0);
    if(dis1 == dis2)
    {
        return a.n > b.n;
    }
    return dis1 < dis2;
}

int main() {
    int n;
    cin >> n;
    Point p[n];
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        p[i] = Point(x, y, i+1);
    }

    sort(p, p + n, cmp);
    for(int i = 0; i < n; i++)
    {
        cout << p[i].n << endl;
    }
    return 0;
}