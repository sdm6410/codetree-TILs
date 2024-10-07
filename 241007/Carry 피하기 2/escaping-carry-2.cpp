#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int n;
vector<int> num_list;

// 자리수의 합이 10 이상이 되는지 확인하는 함수
bool is_carry(int a, int b, int c) {
    // 세 숫자를 문자열로 변환
    string str_a = to_string(num_list[a]);
    string str_b = to_string(num_list[b]);
    string str_c = to_string(num_list[c]);

    // 세 문자열의 최대 길이 계산
    int max_len = max({str_a.size(), str_b.size(), str_c.size()});

    // max_len에 맞춰 자릿수를 맞추기 위해 앞에 '0'을 채움
    while (str_a.size() < max_len) str_a = '0' + str_a;
    while (str_b.size() < max_len) str_b = '0' + str_b;
    while (str_c.size() < max_len) str_c = '0' + str_c;

    // 자릿수별로 합을 계산하여 10 이상인지 확인
    for (int i = 0; i < max_len; i++) {
        if ((str_a[i] - '0') + (str_b[i] - '0') + (str_c[i] - '0') >= 10) {
            return true; // carry가 발생
        }
    }

    return false; // carry가 발생하지 않음
}

// 세 숫자의 합을 반환하는 함수
int calc(int a, int b, int c) {
    return num_list[a] + num_list[b] + num_list[c];
}

int main() {
    // 입력 받기
    cin >> n;
    num_list.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> num_list[i];
    }

    // 결과값 초기화
    int ans = -1;

    // 완전 탐색 시작 (세 숫자의 조합을 확인)
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                // carry가 발생하지 않으면 ans를 업데이트
                if (!is_carry(i, j, k)) {
                    ans = max(ans, calc(i, j, k));
                }
            }
        }
    }

    // 결과 출력
    cout << ans << endl;

    return 0;
}