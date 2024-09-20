#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

int main() {
    // 변수 선언 및 입력
    string input;
    cin >> input;
    
    int length = input.length();
    vector<int> binary(length);
    
    for (int i = 0; i < length; ++i) {
        binary[i] = input[i] - '0';  // Convert char to int
    }

    // 각 i번째 자릿수를 바꾸었을 때의 십진수 값을 구해줍니다.
    long long ans = numeric_limits<long long>::min();
    
    for (int i = 0; i < length; ++i) {
        // i번째 자릿수를 바꿉니다.
        binary[i] = 1 - binary[i];
        
        // 십진수로 변환합니다.
        long long num = 0;
        for (int j = 0; j < length; ++j) {
            num = num * 2 + binary[j];
        }
        
        ans = max(ans, num);
        
        // i번째 자릿수를 원래대로 돌려놓습니다.
        binary[i] = 1 - binary[i];
    }

    // 출력
    cout << ans << endl;

    return 0;
}