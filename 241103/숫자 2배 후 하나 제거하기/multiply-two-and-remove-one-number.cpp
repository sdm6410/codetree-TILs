#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

int n;
vector<int> num_list;

// calc_2 함수: 인덱스 k를 제외한 배열에서 인접한 차이의 합 계산
int calc_2(const vector<int>& doubled_nums, int k) {
    vector<int> temp_nums;

    // 인덱스 k를 제외하고 temp_nums에 값 추가
    for (int i = 0; i < n; i++) {
        if (i == k) continue;
        temp_nums.push_back(doubled_nums[i]);
    }

    int curr_diff = 0;
    for (int i = 0; i < n - 2; i++) {
        curr_diff += abs(temp_nums[i] - temp_nums[i + 1]);
    }

    return curr_diff;
}

// calc 함수: 선택된 인덱스 k의 값을 두 배로 하고 최솟값을 계산
int calc(int k) {
    // temp_nums에 num_list 복사
    vector<int> temp_nums = num_list;

    // 선택된 인덱스 k를 두 배로 해줌
    temp_nums[k] *= 2;

    int curr_min_diff = INT_MAX;

    // 각 인덱스를 제외한 경우에 대해 calc_2를 호출하여 최소 차이를 계산
    for (int i = 0; i < n; i++) {
        curr_min_diff = min(curr_min_diff, calc_2(temp_nums, i));
    }

    return curr_min_diff;
}

int main() {
    // n 입력
    cin >> n;

    // num_list 입력
    num_list.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> num_list[i];
    }

    int min_diff = INT_MAX;

    // 두 배 해줄 인덱스를 완전 탐색
    for (int i = 0; i < n; i++) {
        min_diff = min(min_diff, calc(i));
    }

    // 결과 출력
    cout << min_diff << endl;

    return 0;
}