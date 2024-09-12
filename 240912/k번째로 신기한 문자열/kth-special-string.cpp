#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    string T;
    cin >> n >> k;
    cin >> T;
    
    vector<string> str(n);
    vector<string> result;

    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }

    int len = T.length();
    for(int i = 0; i < n; i++) {
        bool flag = true;
        for(int j = 0; j < len; j++) {
            if(T[j] != str[i][j]) {
                flag = false;
                break;
            }
        }
        if(flag) {
            result.push_back(str[i]);
        }
    }
    // 정렬
    sort(result.begin(), result.end());
    cout <<  result[k - 1];
    return 0;
}