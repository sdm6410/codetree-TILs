#include <iostream>
#include <vector>
using namespace std;

// 변수 선언
int n;
vector<vector<int>> grid;

// 첫 번째 최대 코인의 좌표
int first_x = 0, first_y = 0;

// 겹치는지 확인하는 함수
bool is_duplicated(int x, int y) {
    // first_x, first_y ~ first_x, first_y + 2 까지 겹치면 true
    return x == first_x && (y == first_y || y == first_y - 1 || y == first_y - 2);
}

int main() {
    // 입력
    cin >> n;
    grid.resize(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // 첫 번째 최대 코인
    int first_max = 0;

    // 첫 번째 완전 탐색
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 2; j++) {
            // curr_coin 계산
            int curr_coin = grid[i][j] + grid[i][j + 1] + grid[i][j + 2];

            // 현재의 동전이 first_max보다 많으면 업데이트
            if (curr_coin >= first_max) {
                first_max = curr_coin;
                first_x = i;
                first_y = j;
            }
        }
    }

    // 두 번째 최대 코인
    int second_max = 0;

    // 두 번째 완전 탐색
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 2; j++) {
            // 겹치지 않는 범위라면
            if (!is_duplicated(i, j)) {
                // curr_coin 계산
                int curr_coin = grid[i][j] + grid[i][j + 1] + grid[i][j + 2];

                // second_max 업데이트
                second_max = max(second_max, curr_coin);
            }
        }
    }

    // 결과 출력
    cout << first_max + second_max << endl;

    return 0;
}