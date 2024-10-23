#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <numeric>  // accumulate 함수를 사용하기 위해 추가

using namespace std;

// 함수들
// all_diff(a, b, c)
bool all_diff(int a, int b, int c, vector<int>& ability_list) {

    // team_1, team_2
    int team_1 = ability_list[a] + ability_list[b];
    int team_2 = ability_list[c];

    // team_3
    int team_3 = accumulate(ability_list.begin(), ability_list.end(), 0) - team_1 - team_2;

    // 서로 다른지 반환
    return team_1 != team_2 && team_2 != team_3 && team_1 != team_3;
}

// calc(a, b, c)
int calc(int a, int b, int c, vector<int>& ability_list) {

    // team_1, team_2
    int team_1 = ability_list[a] + ability_list[b];
    int team_2 = ability_list[c];

    // team_3
    int team_3 = accumulate(ability_list.begin(), ability_list.end(), 0) - team_1 - team_2;

    // 최댓값과 최솟값의 차이 반환
    return max({team_1, team_2, team_3}) - min({team_1, team_2, team_3});
}

int main() {
    vector<int> ability_list(5);

    // ability_list 입력
    for (int i = 0; i < 5; ++i) {
        cin >> ability_list[i];
    }

    // min_diff
    int min_diff = INT_MAX;

    // 완전 탐색 시작
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            for (int k = 0; k < 5; ++k) {
                // 서로 다른 3개이면서, 모든 능력치가 다르면
                if (i != j && j != k && i != k && all_diff(i, j, k, ability_list)) {
                    // min_diff 업데이트
                    min_diff = min(min_diff, calc(i, j, k, ability_list));
                }
            }
        }
    }

    // 출력
    if (min_diff == INT_MAX) {
        // -1 출력
        cout << -1 << endl;
    } else {
        cout << min_diff << endl;
    }

    return 0;
}