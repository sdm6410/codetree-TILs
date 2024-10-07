#include <iostream>
#include <vector>
#include <cmath>
#include <climits>  // INT_MAX 사용을 위해

using namespace std;

// 변수 선언
int n, s;
vector<int> num_list;

// calc 함수: a, b번째 인덱스를 제외한 합을 계산하고 s와의 차이 반환
int calc(int a, int b) {
    int curr_sum = 0;

    // num_list의 숫자 중 a, b번째 인덱스 제외하고 더하기
    for (int i = 0; i < n; i++) {
        if (i == a || i == b)
            continue;
        curr_sum += num_list[i];
    }

    // curr_sum과 s의 차이를 반환
    return abs(curr_sum - s);
}

int main() {
    // 입력
    cin >> n >> s;
    num_list.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> num_list[i];
    }

    // min_diff 초기값을 최대 정수로 설정
    int min_diff = INT_MAX;

    // 완전 탐색 시작
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // calc 함수를 호출하여 min_diff 업데이트
            min_diff = min(min_diff, calc(i, j));
        }
    }

    // 결과 출력
    cout << min_diff << endl;

    return 0;
}