#include <iostream>
#define DIR_NUM 4
#define MAX_N 100
using namespace std;

int n, m;
char arr[MAX_N][MAX_N];

int dx[DIR_NUM] = {0, 1, 0, -1};  // 오른쪽, 아래, 왼쪽, 위
int dy[DIR_NUM] = {1, 0, -1, 0};

int curr_x = 0, curr_y = 0;  // 시작 위치 (0, 0)
int dir = 0;  // 시작 방향 오른쪽

bool InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < m;
}

int main() {
    cin >> n >> m;

    // 배열을 0으로 초기화합니다.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = 0;  // 모든 위치를 초기화
        }
    }

    arr[curr_x][curr_y] = 'A';  // 첫 번째 위치에 'A'를 넣습니다.

    // n * m 개의 문자를 차례로 채워 넣습니다.
    for (int i = 1; i < n * m; i++) {
        bool moved = false;  // 이동 여부를 저장하는 변수

        // 최대 4번 방향을 전환하여 가능한 방향을 찾음
        for (int k = 0; k < DIR_NUM; k++) {
            int nx = curr_x + dx[dir];
            int ny = curr_y + dy[dir];

            // 새로운 위치가 배열 범위 내에 있고, 아직 방문하지 않은 곳이면 이동합니다.
            if (InRange(nx, ny) && arr[nx][ny] == 0) {
                curr_x = nx;
                curr_y = ny;
                arr[curr_x][curr_y] = 'A' + i % 26;  // 다음 문자를 넣습니다. ('Z' 이후는 다시 'A'로)
                moved = true;  // 이동 완료
                break;
            } else {
                // 이동할 수 없으면 시계방향으로 회전
                dir = (dir + 1) % DIR_NUM;
            }
        }

        // 만약 4방향 모두 이동할 수 없다면 종료 (이 상황은 발생하지 않음)
        if (!moved) {
            break;
        }
    }

    // 결과 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0)
                cout << ". ";  // 방문하지 않은 곳은 '.'으로 출력
            else
                cout << arr[i][j] << " ";  // 방문한 곳은 문자를 출력
        }
        cout << endl;
    }

    return 0;
}