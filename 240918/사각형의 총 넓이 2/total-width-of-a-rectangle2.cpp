#include <iostream>
using namespace std;
int OFFSET = 100;
int map[201][201];
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

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        getArea(x1 + OFFSET, y1 + OFFSET, x2 + OFFSET, y2 + OFFSET);
    }

    answer = 0;
    for(int i = 0; i < 201; i++)
    {
        for(int j = 0; j < 201; j++)
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