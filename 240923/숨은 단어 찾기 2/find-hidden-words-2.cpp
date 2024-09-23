#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 방향벡터: 왼아, 왼, 왼위, 위, 오위, 오, 오아, 아
int dxs[] = {1, 0, -1, -1, -1, 0, 1, 1};
int dys[] = {-1, -1, -1, 0, 1, 1, 1, 0};

// 격자 범위 안에 있는지 확인하는 함수
bool in_range(int x, int y, int n, int m) {
    return 0 <= x && x < n && 0 <= y && y < m;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> strings(n); // n개의 문자열을 저장하는 벡터
    for (int i = 0; i < n; i++) {
        cin >> strings[i];
    }

    // LEE 개수
    int num_of_LEE = 0;

    // 모든 위치를 순회
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // L로 시작하는지 확인
            if (strings[i][j] != 'L') {
                continue;
            }

            // 8방향으로 탐색
            for (int d = 0; d < 8; d++) {
                int curx = i;
                int cury = j;
                string check_LEE = "L";  // L부터 시작

                // 다음 위치 확인
                while (true) {
                    int nx = curx + dxs[d];
                    int ny = cury + dys[d];

                    // 격자를 벗어나면 탐색 종료
                    if (!in_range(nx, ny, n, m)) {
                        break;
                    }

                    // E가 있는지 확인
                    if (strings[nx][ny] == 'E') {
                        check_LEE += 'E';

                        // "LEE"를 찾으면 카운트 증가 후 종료
                        if (check_LEE == "LEE") {
                            num_of_LEE++;
                            break;
                        }
                    } else {
                        break;
                    }

                    // 현재 위치 갱신
                    curx = nx;
                    cury = ny;
                }
            }
        }
    }

    // 결과 출력
    cout << num_of_LEE << endl;

    return 0;
}