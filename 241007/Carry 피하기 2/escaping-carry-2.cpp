#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int max_number = -1;

    // 세 숫자의 조합을 찾는 부분
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int n1 = numbers[i];
                int n2 = numbers[j];
                int n3 = numbers[k];
                bool carry = false;

                // 각 자리수를 더한 값이 10을 넘는지 확인
                for (int m = 0; m < 5; m++) {
                    int s = (n1 / (int)pow(10, m) % 10) + 
                            (n2 / (int)pow(10, m) % 10) + 
                            (n3 / (int)pow(10, m) % 10);
                    
                    if (s >= 10) {
                        carry = true;
                        break;
                    }
                }

                // carry가 발생하지 않은 경우에 합을 구해 최대값 갱신
                if (!carry) {
                    int s = n1 + n2 + n3;
                    if (s > max_number) {
                        max_number = s;
                    }
                }
            }
        }
    }

    cout << max_number << endl;

    return 0;
}