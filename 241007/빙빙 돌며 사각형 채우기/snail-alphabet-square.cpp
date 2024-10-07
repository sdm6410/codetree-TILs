#include <iostream>
#include <vector>

using namespace std;

int n = 4;
vector<vector<int>> answer(n, vector<int>(n, 0));  // 2D 벡터로 배열 생성

// 범위 안에 있는지 확인하는 함수
bool in_range(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

int main() {
    // 방향벡터: 오른쪽(0), 아래쪽(1), 왼쪽(2), 위쪽(3)
    int dxs[] = {0, 1, 0, -1};
    int dys[] = {1, 0, -1, 0};
    int x = 0, y = 0;  // 시작 위치 (0, 0)
    int dir_num = 0;   // 0: 오른쪽, 1: 아래쪽, 2: 왼쪽, 3: 위쪽

    // 처음 시작 위치에 1을 넣습니다.
    answer[x][y] = 1;

    // n * n번 반복
    for (int i = 2; i <= n * n; i++) {
        // 현재 방향을 기준으로 다음 위치 계산
        int nx = x + dxs[dir_num];
        int ny = y + dys[dir_num];

        // 범위를 벗어나거나 이미 숫자가 있으면 방향을 바꿈
        if (!in_range(nx, ny) || answer[nx][ny] != 0) {
            dir_num = (dir_num + 1) % 4;  // 시계방향 회전
            nx = x + dxs[dir_num];
            ny = y + dys[dir_num];
        }

        // 다음 위치로 이동하고 값 채우기
        x = nx;
        y = ny;
        answer[x][y] = i;
    }

    // 결과 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}