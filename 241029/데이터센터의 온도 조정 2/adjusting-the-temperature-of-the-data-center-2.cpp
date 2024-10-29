#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, c, g, h;
vector<pair<int, int>> preference_list;

int calc(int celcious, int ta, int tb) {
    if (celcious < ta) {
        return c;
    } else if (ta <= celcious && celcious <= tb) {
        return g;
    } else {
        return h;
    }
}

int simulate(int celcious) {
    int curr_work = 0;

    for (int i = 0; i < n; i++) {
        int ta = preference_list[i].first;
        int tb = preference_list[i].second;

        curr_work += calc(celcious, ta, tb);
    }
    return curr_work;
}

int main() {
    cin >> n >> c >> g >> h;

    preference_list.resize(n);
    for (int i = 0; i < n; i++) {
        int ta, tb;
        cin >> ta >> tb;
        preference_list[i] = make_pair(ta, tb);
    }

    int max_work = 0;

    for (int celcious = 0; celcious <= 1000; celcious++) {
        max_work = max(max_work, simulate(celcious));
    }

    cout << max_work << endl;

    return 0;
}