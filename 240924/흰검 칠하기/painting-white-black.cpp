#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, char>> cmd;
    
    for (int i = 0; i < n; ++i) {
        int step;
        char direct;
        cin >> step >> direct;
        cmd.push_back({step, direct});
    }

    vector<vector<int>> arr(200000, vector<int>(3, 0));
    for (int i = 0; i < 200000; ++i) {
        arr[i][0] = 2;  // Initialize first element to 2
    }

    int start = 100000;

    for (auto& c : cmd) {
        int step = c.first;
        char direct = c.second;

        if (direct == 'R') {
            for (int i = start; i < start + step; ++i) {
                arr[i][1]++;
                if (arr[i][1] >= 2 && arr[i][2] >= 2) {
                    arr[i][0] = 0; // Gray
                } else {
                    arr[i][0] = 1; // Black
                }
            }
            start = start + step - 1;
        }
        if (direct == 'L') {
            for (int i = start; i > start - step; --i) {
                arr[i][2]++;
                if (arr[i][1] >= 2 && arr[i][2] >= 2) {
                    arr[i][0] = 0; // Gray
                } else {
                    arr[i][0] = -1; // White
                }
            }
            start = start - step + 1;
        }
    }

    int black = 0, white = 0, gray = 0;
    for (const auto& a : arr) {
        if (a[0] == -1) white++;
        else if (a[0] == 1) black++;
        else if (a[0] == 0) gray++;
    }

    cout << white << " " << black << " " << gray << endl;

    return 0;
}