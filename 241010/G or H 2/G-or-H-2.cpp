#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 전역 변수
vector<string> linear(101, ""); // 빈 문자열로 초기화

// exists(s, e)
bool exists(int s, int e) {
    // 양 끝에 사람이 있는지 반환
    return !linear[s].empty() && !linear[e - 1].empty();
}

// only_g(s, e)
bool only_g(int s, int e) {
    // 현 범위 중 'H'가 있는지 확인
    for (int i = s; i < e; ++i) {
        // 'H'가 나오면 실패
        if (linear[i] == "H") return false;
    }

    // 'G'가 있는지 확인
    for (int i = s; i < e; ++i) {
        if (linear[i] == "G") return true; // 'G'가 1개 이상 있으면 성공
    }

    return false; // 'G'가 없으면 실패
}

// only_h(s, e)
bool only_h(int s, int e) {
    // 현 범위 중 'G'가 있는지 확인
    for (int i = s; i < e; ++i) {
        // 'G'가 나오면 실패
        if (linear[i] == "G") return false;
    }

    // 'H'가 있는지 확인
    for (int i = s; i < e; ++i) {
        if (linear[i] == "H") return true; // 'H'가 1개 이상 있으면 성공
    }

    return false; // 'H'가 없으면 실패
}

// same_g_h(s, e)
bool same_g_h(int s, int e) {
    int g_cnt = 0, h_cnt = 0;

    // 현 범위에서 'G'와 'H' 개수를 카운트
    for (int i = s; i < e; ++i) {
        if (linear[i] == "G") g_cnt++;
        if (linear[i] == "H") h_cnt++;
    }

    // 'G'와 'H'의 개수가 같은지 반환
    return g_cnt == h_cnt;
}

int main() {
    int n;
    cin >> n;

    // pos, alpha 입력
    for (int i = 0; i < n; ++i) {
        int pos;
        string alpha;
        cin >> pos >> alpha;
        linear[pos] = alpha;
    }

    // max_len
    int max_len = 0;

    // 양 끝점 잡기
    for (int i = 1; i < 101; ++i) {
        for (int j = i + 1; j < 102; ++j) {
            // 양 끝점에 사람이 있고, 오로지 G로 이루어져 있으면,
            if (exists(i, j) && only_g(i, j)) {
                max_len = max(max_len, j - i - 1);
            }
            // 양 끝점에 사람이 있고, 오로지 H로 이루어져 있으면,
            else if (exists(i, j) && only_h(i, j)) {
                max_len = max(max_len, j - i - 1);
            }
            // 양 끝점에 사람이 있고, G와 H가 정확히 같은 갯수만큼 있다면,
            else if (exists(i, j) && same_g_h(i, j)) {
                max_len = max(max_len, j - i - 1);
            }
        }
    }

    // 출력
    cout << max_len << endl;

    return 0;
}