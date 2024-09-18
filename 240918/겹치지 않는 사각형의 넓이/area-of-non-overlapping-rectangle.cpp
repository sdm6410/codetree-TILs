#include <iostream>
using namespace std;
int OFFSET = 1000;
int map[2001][2001];
int answer;

void getArea(int x1, int y1, int x2, int y2)
{
    for(int i = x1; i < x2; i++)
    {
        for(int j = y1; j < y2; j++)
        {
            map[i][j] = 1;
        }
    }
}

void getEmArea(int x1, int y1, int x2, int y2)
{
    for(int i = x1; i < x2; i++)
    {
        for(int j = y1; j < y2; j++)
        {
            map[i][j] = 0;
        }
    }
}

int main() {
    int x1, y1, x2, y2;
    for(int i = 0; i < 2; i++)
    {

        cin >> x1 >> y1 >> x2 >> y2;
        getArea(OFFSET + x1, OFFSET + y1, OFFSET + x2, OFFSET + y2);
    }
    cin >> x1 >> y1 >> x2 >> y2;
    getEmArea(OFFSET + x1, OFFSET + y1, OFFSET + x2, OFFSET + y2);

    answer = 0;
    for(int i = 0; i < 2001; i++)
    {
        for(int j = 0; j < 2001; j++)
        {
            if(map[i][j] == 1)
            {
                answer++;
            }
        }
    }
    cout << answer;

    return 0;
}