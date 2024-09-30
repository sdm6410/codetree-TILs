#include <iostream>
#include <map>
using namespace std;

int dxs[] = {0, 1, -1, 0};
int dys[] = {1, 0, 0, -1};

bool in_range(int x, int y, int n) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

int main() {
    int n, t;
    cin >> n >> t;

    int r, c;
    char d;
    cin >> r >> c >> d;
    r--; 
    c--; 

    map<char, int> mapper = {
        {'R', 0},
        {'D', 1},
        {'U', 2},
        {'L', 3}
    };

    int dir_num = mapper[d];

    while (t) {
        int nx = r + dxs[dir_num];
        int ny = c + dys[dir_num];

        if (!in_range(nx, ny, n)) {
            dir_num = 3 - dir_num;
            t--;
        }

        t--;
        if (t < 0) break;

        r = r + dxs[dir_num];
        c = c + dys[dir_num];
    }

    cout << r + 1 << " " << c + 1 << endl;

    return 0;
}