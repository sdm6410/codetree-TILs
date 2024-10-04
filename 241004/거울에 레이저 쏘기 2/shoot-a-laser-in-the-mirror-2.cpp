#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, k;
vector<vector<char>> grid;
int dx[] = {1, 0, -1, 0}; // 하, 우, 상, 좌 (방향)
int dy[] = {0, 1, 0, -1};

struct Pair { // 좌표를 담기 위한 구조체
    int x, y, dir;
    Pair(int x, int y, int dir) : x(x), y(y), dir(dir) {}
};

int bfs(Pair cur) {
    int x = cur.x;
    int y = cur.y;
    int dir = cur.dir;

    int ans = 0;
    while (true) {
        int nx = 0, ny = 0;

        if (grid[x][y] == '/') { // 각 상황에 맞는 레이저의 방향 설정
            if (dir % 2 == 0) {
                dir = (dir + 3) % 4;
                nx = x + dx[dir];
                ny = y + dy[dir];
                ans++;
            } else {
                dir = (dir + 1) % 4;
                nx = x + dx[dir];
                ny = y + dy[dir];
                ans++;
            }
        } else {
            if (dir % 2 == 0) {
                dir = (dir + 1) % 4;
                nx = x + dx[dir];
                ny = y + dy[dir];
                ans++;
            } else {
                dir = (dir + 3) % 4;
                nx = x + dx[dir];
                ny = y + dy[dir];
                ans++;
            }
        }

        if (nx < 0 || ny < 0 || nx >= n || ny >= n) { // 만약 레이저가 격자를 탈출하면 break
            break;
        }
        x = nx;
        y = ny;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    
    grid.resize(n, vector<char>(n)); // 격자 초기화
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    cin >> k;

    int x = 0, y = 0;
    vector<Pair> arr(4 * n, Pair(0, 0, 0)); // 레이저가 들어오는 좌표를 담기 위한 객체 배열

    int dir = 1; // 방향 초기값
    int direction = 0; // 레이저 초기 좌표값
    arr[0] = Pair(x, y, direction);

    for (int i = 1; i < 4 * n; i++) { // 테두리 좌표 저장
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if (nx < 0 || ny < 0 || nx >= n || ny >= n) {
            dir = (dir + 3) % 4; // 테두리를 돌기 위한 방향값
            direction = (direction + 3) % 4; // 레이저가 들어오는 방향 저장
            arr[i] = Pair(x, y, direction);
            continue;
        }

        arr[i] = Pair(nx, ny, direction);
        x = nx;
        y = ny;
    }

    cout << bfs(arr[k - 1]) << "\n";

    return 0;
}