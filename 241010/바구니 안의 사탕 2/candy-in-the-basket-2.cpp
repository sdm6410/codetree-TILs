#include <iostream>
#include <vector>
#include <climits> // for INT_MIN
using namespace std;

const int MAX_SIZE = 400;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> lines(MAX_SIZE + 1, 0); // 배열 초기화

    // 입력 처리
    for (int i = 0; i < n; ++i) {
        int count, pos;
        cin >> count >> pos;
        lines[pos] += count; // 주어진 위치에 사탕 개수 추가
    }

    int max_count = INT_MIN; // 가장 작은 값으로 초기화

    // 범위 내에서 바구니 위치 이동
    for (int i = k; i <= MAX_SIZE - k; ++i) {
        int count = 0;
        for (int j = i - k; j <= i + k; ++j) {
            count += lines[j];
        }
        max_count = max(max_count, count);
    }

    cout << max_count << endl;

    return 0;
}