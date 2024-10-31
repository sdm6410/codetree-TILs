#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <climits>
using namespace std;

int t, a, b;
vector<string> linear(1001, "0");

int get_most_close_s(int idx) {
    vector<int> s_idx_list;

    for (int i = 0; i < 1001; i++) {
        if (linear[i] == "S") {
            s_idx_list.push_back(i);
        }
    }

    int min_dist = INT_MAX;

    for (int s_idx : s_idx_list) {
        min_dist = min(min_dist, abs(s_idx - idx));
    }

    return min_dist;
}

int get_most_close_n(int idx) {
    vector<int> n_idx_list;

    for (int i = 0; i < 1001; i++) {
        if (linear[i] == "N") {
            n_idx_list.push_back(i);
        }
    }

    int min_dist = INT_MAX;

    for (int n_idx : n_idx_list) {
        min_dist = min(min_dist, abs(n_idx - idx));
    }

    return min_dist;
}

int main() {
    cin >> t >> a >> b;

    for (int i = 0; i < t; i++) {
        string c;
        int x;
        cin >> c >> x;
        linear[x] = c;
    }

    int special_pos_cnt = 0;

    for (int i = a; i <= b; i++) {
        int d1 = get_most_close_s(i);
        int d2 = get_most_close_n(i);

        if (d1 <= d2) {
            special_pos_cnt++;
        }
    }

    cout << special_pos_cnt << endl;

    return 0;
}