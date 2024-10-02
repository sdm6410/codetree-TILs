#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int setting(int coord) {
    return coord + 1000;
}

int main() {
    vector<vector<int>> arr(2001, vector<int>(2001, 0)); // 2001 x 2001 배열 선언 및 초기화

    // 첫 번째 직사각형 입력 및 좌표 변환
    int x1_origin, y1_origin, x2_origin, y2_origin;
    cin >> x1_origin >> y1_origin >> x2_origin >> y2_origin;
    x1_origin = setting(x1_origin);
    y1_origin = setting(y1_origin);
    x2_origin = setting(x2_origin);
    y2_origin = setting(y2_origin);

    // 첫 번째 직사각형에 1로 채우기
    for (int i = x1_origin; i < x2_origin; i++) {
        for (int j = y1_origin; j < y2_origin; j++) {
            arr[i][j] = 1;
        }
    }

    // 두 번째 직사각형 입력 및 좌표 변환
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1 = setting(x1);
    y1 = setting(y1);
    x2 = setting(x2);
    y2 = setting(y2);

    // 두 번째 직사각형의 영역을 0으로 변경
    for (int i = x1; i < x2; i++) {
        for (int j = y1; j < y2; j++) {
            arr[i][j] = 0;
        }
    }

    int max_v = 0;
    int row_count = 0;

    // 엣지 케이스 처리 (사각형이 두 개로 나뉘는 경우)
    if ((x1 < x1_origin && x2 > x2_origin && y1_origin < y1 && y2 < y2_origin) ||
        (x1_origin < x1 && x2 < x2_origin && y1 < y1_origin && y2 > y2_origin)) {
        cout << (x2_origin - x1_origin) * (y2_origin - y1_origin) << endl;
    } else {
        // 잔해물 카운트 및 최대 넓이 계산
        for (int i = x1_origin; i < x2_origin; i++) {
            int count = 0;
            for (int j = y1_origin; j < y2_origin; j++) {
                if (arr[i][j] == 1) {
                    count++;
                }
            }
            if (count > 0) {
                row_count++;
            }
            max_v = max(max_v, count);
        }
        cout << max_v * row_count << endl;
    }

    return 0;
}