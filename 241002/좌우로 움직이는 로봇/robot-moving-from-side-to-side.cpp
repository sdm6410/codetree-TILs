#include <iostream>
#include <vector>
#include <algorithm> // for max function
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    // 입력 최대치에 따라 배열 크기를 넉넉하게 설정
    vector<int> pos_a(10001, 0), pos_b(10001, 0);
    int time_a = 1, time_b = 1;

    // t만큼의 변화동안 pos_a
    for (int i = 0; i < N; i++) {
        int t;
        char d;
        cin >> t >> d;
        for (int j = 0; j < t; j++) {
            pos_a[time_a] = pos_a[time_a - 1] + (d == 'R' ? 1 : -1);
            time_a++;
        }
    }

    // t만큼의 변화동안 pos_b
    for (int i = 0; i < M; i++) {
        int t;
        char d;
        cin >> t >> d;
        for (int j = 0; j < t; j++) {
            pos_b[time_b] = pos_b[time_b - 1] + (d == 'R' ? 1 : -1);
            time_b++;
        }
    }

    // time_a, time_b가 다른 경우, 차이만큼 동안의 위치 보정
    if (time_a < time_b) {
        for (int i = time_a; i < time_b; ++i) {
            pos_a[i] = pos_a[i - 1];
        }
    } else if (time_a > time_b) {
        for (int i = time_b; i < time_a; ++i) {
            pos_b[i] = pos_b[i - 1];
        }
    }

    int cnt = 0;
    int time_max = max(time_a, time_b);
    
    // 위치가 같은 지점에서 상태가 바뀌었는지 확인
    for (int i = 1; i < time_max; ++i) {
        if (pos_a[i] == pos_b[i] && pos_a[i - 1] != pos_b[i - 1]) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}