#include <iostream>
#include <vector>

using namespace std;

// Function to check if segments overlap
bool is_duplicated(int a, int b, int c, const vector<pair<int, int>>& line_pos, int n) {
    vector<int> temp(101, 0);

    // Mark segments that are not removed
    for (int i = 0; i < n; i++) {
        if (i == a || i == b || i == c) {
            continue;
        }

        int s = line_pos[i].first;
        int e = line_pos[i].second;

        for (int j = s; j <= e; j++) {
            temp[j]++;
        }
    }

    // Check if there are any overlapping segments
    for (int i = 0; i <= 100; i++) {
        if (temp[i] >= 2) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> line_pos(n);

    // Read line segments
    for (int i = 0; i < n; i++) {
        int start, end;
        cin >> start >> end;
        line_pos[i] = make_pair(start, end);
    }

    int cnt = 0;

    // Brute-force search
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (!is_duplicated(i, j, k, line_pos, n)) {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}