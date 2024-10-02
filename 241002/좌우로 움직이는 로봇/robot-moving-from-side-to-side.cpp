#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m; // a의 움직임, b의 움직임

    vector<int> timeA(n), timeB(m);
    vector<char> distA(n), distB(m);

    int timesizeA = 0; // a의 총 이동 시간
    for (int i = 0; i < n; ++i) {
        int time;
        cin >> time;
        timesizeA += time;
        timeA[i] = time;
        cin >> distA[i]; // 방향 입력
    }

    int timesizeB = 0; // b의 총 이동 시간
    for (int i = 0; i < m; ++i) {
        int time;
        cin >> time;
        timesizeB += time;
        timeB[i] = time;
        cin >> distB[i]; // 방향 입력
    }

    int size = max(timesizeA, timesizeB); // 더 큰 사이즈 선택
    vector<int> locationA(size + 1, 0), locationB(size + 1, 0);

    int location = 0;
    int idx = 0; // 다음 시간의 인덱스
    for (int i = 0; i < n; ++i) {
        if (distA[i] == 'R') {
            for (int j = 1; j <= timeA[i]; ++j) {
                location++;
                locationA[idx + j] = location;
            }
        } else {
            for (int j = 1; j <= timeA[i]; ++j) {
                location--;
                locationA[idx + j] = location;
            }
        }
        idx += timeA[i]; // 진행한 시간만큼 인덱스 증가
    }

    location = 0;
    idx = 0;
    for (int i = 0; i < m; ++i) {
        if (distB[i] == 'R') {
            for (int j = 1; j <= timeB[i]; ++j) {
                location++;
                locationB[idx + j] = location;
            }
        } else {
            for (int j = 1; j <= timeB[i]; ++j) {
                location--;
                locationB[idx + j] = location;
            }
        }
        idx += timeB[i];
    }

    // 먼저 종료된 경우 마지막 위치로 채우기
    int min_time = min(timesizeA, timesizeB);
    if (timesizeA < timesizeB) {
        for (int i = min_time + 1; i <= size; ++i) {
            int last = locationA[min_time];
            locationA[i] = last;
        }
    } 
    if (timesizeA > timesizeB) {
        for (int i = min_time + 1; i <= size; ++i) {
            int last = locationB[min_time];
            locationB[i] = last;
        }
    }

    // 두 위치가 같아지는 경우의 수 카운트
    int cnt = 0;
    for (int i = 1; i <= size; ++i) {
        if (locationA[i] == locationB[i] && locationA[i - 1] != locationB[i - 1]) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}