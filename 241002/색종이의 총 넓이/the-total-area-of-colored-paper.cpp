#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

const int OFFSET = 100; // 음수 범위 대비
int grid[201][201] = {0}; // grid 크기 설정
int cnt = 0; // 총 한 구역 넓이

// 색종이 붙이는 함수 선언
void paint(int x, int y) {
    for (int i = x; i < x + 8; i++) { // 색종이 8x8 크기
        for (int j = y; j < y + 8; j++) {
            if (grid[i][j] == 0)
                grid[i][j] = 1;
        }
    }
}

int main() {
    int N;
    cin >> N;
    cin.ignore();

    // 색종이 붙이기
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        paint(x + OFFSET, y + OFFSET); // OFFSET 적용하여 paint 호출
    }

    // 넓이 계산
    for (int i = 0; i < 201; i++) {
        for (int j = 0; j < 201; j++) {
            if (grid[i][j] != 0) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}