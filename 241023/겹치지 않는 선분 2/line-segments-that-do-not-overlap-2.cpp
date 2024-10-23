#include <iostream>
#include <vector>
using namespace std;

// 선분 겹침 여부 확인 함수
bool is_duplicated(int k, const vector<pair<int, int>>& line_list, int n) {
    // 현재 선분의 x1, x2 언팩킹
    int x1 = line_list[k].first;
    int x2 = line_list[k].second;

    // 비교할 선분들 탐색 시작
    for (int i = 0; i < n; ++i) {
        // 현재 선분
        if (i == k) {
            // skip
            continue;
        }

        // 이외의 선분(비교 선분) 언팩킹
        int other_x1 = line_list[i].first;
        int other_x2 = line_list[i].second;

        // 현재 선분보다 비교 선분이 뒤에서 출발하는 선분일 경우
        if (other_x1 < x1) {
            // other_x2가 x2보다 앞에 있으면
            if (other_x2 > x2) {
                // 겹침
                return true;
            }
        }
        // 현재 선분보다 비교 선분이 앞에서 출발하는 경우
        else {
            // other_x2가 x2보다 뒤에 있으면
            if (other_x2 < x2) {
                // 겹침
                return true;
            }
        }
    }

    // 모두 비교했으면 실패
    return false;
}

int main() {
    int n;
    // 입력
    cin >> n;

    // 선분 리스트 생성
    vector<pair<int, int>> line_list(n);
    for (int i = 0; i < n; ++i) {
        cin >> line_list[i].first >> line_list[i].second;
    }

    // 설계
    int cnt = 0;

    // 완전 탐색 시작
    for (int i = 0; i < n; ++i) {
        // 다른 선분과 겹치지 않는 선분이면
        if (!is_duplicated(i, line_list, n)) {
            // cnt에 추가
            ++cnt;
        }
    }

    // 출력
    cout << cnt << endl;

    return 0;
}