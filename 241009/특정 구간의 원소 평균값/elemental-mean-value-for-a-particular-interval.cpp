#include <iostream>
#include <vector>
using namespace std;

// 함수: 부분 구간 [a, b)에서 평균값이 존재하는지 확인
bool is_ok(const vector<int>& num_list, int a, int b) {
    // 부분 구간의 합 계산
    int curr_sum = 0;
    for (int i = a; i < b; i++) {
        curr_sum += num_list[i];
    }

    // 부분 구간의 평균 계산
    double curr_avg = (double)curr_sum / (b - a);

    // 부분 구간 내에서 평균값이 존재하는지 확인
    for (int i = a; i < b; i++) {
        if (num_list[i] == curr_avg) {
            return true; // 평균값이 존재하면 true 반환
        }
    }

    return false; // 평균값이 없으면 false 반환
}

int main() {
    // n 입력
    int n;
    cin >> n;

    // num_list 입력
    vector<int> num_list(n);
    for (int i = 0; i < n; i++) {
        cin >> num_list[i];
    }

    // 정답 변수
    int ans = 0;

    // 완전 탐색 시작 -> 시작점과 끝점을 선택
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            // 조건에 만족하면 정답에 추가
            if (is_ok(num_list, i, j)) {
                ans++;
            }
        }
    }

    // 출력
    cout << ans << endl;

    return 0;
}