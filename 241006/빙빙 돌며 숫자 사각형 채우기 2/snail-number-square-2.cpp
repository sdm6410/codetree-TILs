#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 행 길이, 열 길이 입력
    int n, m;
    cin >> n >> m;

    // 시작 위치
    int x = 0, y = 0;
    vector<vector<int>> grid(n, vector<int>(m, 0));

    // (0, 0)에서 1부터 시작
    grid[x][y] = 1;

    // 아래, 오른쪽, 위, 왼쪽
    int dxs[] = {1, 0, -1, 0};
    int dys[] = {0, 1, 0, -1};
    int dir_num = 0;

    // 격자에서 벗어났는지 확인하는 함수
    auto in_range = [&](int x, int y) {
        return 0 <= x && x < n && 0 <= y && y < m;
    };

    // 2부터 n*m까지 반복
    for (int i = 2; i <= n * m; i++) {
        // 다음 위치 계산
        x += dxs[dir_num];
        y += dys[dir_num];

        // 범위를 벗어났거나 이미 값이 있는 경우
        if (!in_range(x, y) || grid[x][y] != 0) {
            // 이전 위치로 돌아오고
            x -= dxs[dir_num];
            y -= dys[dir_num];
            // 방향을 바꿔줌
            dir_num = (dir_num + 1) % 4;
            // 다시 다음 위치 계산
            x += dxs[dir_num];
            y += dys[dir_num];
        }

        // 격자에 값 넣기
        grid[x][y] = i;
    }

    // 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}