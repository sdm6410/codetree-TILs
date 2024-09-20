#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // r, c 입력
    int r, c;
    cin >> r >> c;

    vector<vector<string>> grid(r, vector<string>(c));
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> grid[i][j];
        }
    }

    // 설계
    int cnt = 0;

    // 완전 탐색 시작
    for (int i = 1; i < r; ++i) {
        for (int j = 1; j < c; ++j) {
            for (int k = i + 1; k < r - 1; ++k) {
                for (int l = j + 1; l < c - 1; ++l) {
                    // 색깔이 전부 달라지는 경우 cnt에 추가
                    if (grid[0][0] != grid[i][j] && 
                        grid[i][j] != grid[k][l] && 
                        grid[k][l] != grid[r - 1][c - 1]) {
                        cnt++;
                    }
                }
            }
        }
    }

    // 출력
    cout << cnt << endl;

    return 0;
}