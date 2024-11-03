#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 전역 변수
int n;
vector<pair<int, int>> points;

// vertical 함수: x좌표가 k인 점들을 반환
vector<pair<int, int>> vertical(int k) {
    vector<pair<int, int>> curr_line;
    for (auto [x, y] : points) {
        if (x == k) {
            curr_line.push_back({x, y});
        }
    }
    return curr_line;
}

// parallel 함수: y좌표가 k인 점들을 반환
vector<pair<int, int>> parallel(int k) {
    vector<pair<int, int>> curr_line;
    for (auto [x, y] : points) {
        if (y == k) {
            curr_line.push_back({x, y});
        }
    }
    return curr_line;
}

// search 함수: 세 개의 선분이 포함하는 고유한 점의 수를 계산
int search(int a, int b, int c, const vector<vector<pair<int, int>>>& points_belongs_to_line) {
    vector<pair<int, int>> line_1 = points_belongs_to_line[a];
    vector<pair<int, int>> line_2 = points_belongs_to_line[b];
    vector<pair<int, int>> line_3 = points_belongs_to_line[c];

    vector<pair<int, int>> curr_points_belongs_to_three_lines;

    // 첫번째 선분에서 중복되지 않는 점 추가
    for (auto point : line_1) {
        if (find(curr_points_belongs_to_three_lines.begin(), curr_points_belongs_to_three_lines.end(), point) == curr_points_belongs_to_three_lines.end()) {
            curr_points_belongs_to_three_lines.push_back(point);
        }
    }

    // 두번째 선분에서 중복되지 않는 점 추가
    for (auto point : line_2) {
        if (find(curr_points_belongs_to_three_lines.begin(), curr_points_belongs_to_three_lines.end(), point) == curr_points_belongs_to_three_lines.end()) {
            curr_points_belongs_to_three_lines.push_back(point);
        }
    }

    // 세번째 선분에서 중복되지 않는 점 추가
    for (auto point : line_3) {
        if (find(curr_points_belongs_to_three_lines.begin(), curr_points_belongs_to_three_lines.end(), point) == curr_points_belongs_to_three_lines.end()) {
            curr_points_belongs_to_three_lines.push_back(point);
        }
    }

    // 고유한 점의 개수 반환
    return curr_points_belongs_to_three_lines.size();
}

int main() {
    // n 입력
    cin >> n;
    
    // points 입력
    points.resize(n);
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        points[i] = {x, y};
    }

    // points_belongs_to_line 초기화
    vector<vector<pair<int, int>>> points_belongs_to_line;

    // 모든 수직/수평 선분 조사
    for (int i = 0; i < 10; i++) {
        points_belongs_to_line.push_back(vertical(i));  // 수직 선분
        points_belongs_to_line.push_back(parallel(i));  // 수평 선분
    }

    // max_point_cnt 초기화
    int max_point_cnt = 0;

    // 선분 3개를 고르기
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            for (int k = j + 1; k < 10; k++) {
                max_point_cnt = max(max_point_cnt, search(i, j, k, points_belongs_to_line));
            }
        }
    }

    // 결과 출력
    if (max_point_cnt == n) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}