#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> ice_berg;

// Function to simulate the count of icebergs floating at a given height
int simulate(int curr_height) {
    int curr_cnt = 0;

    // Check if the first iceberg is floating
    if (ice_berg[0] > curr_height) {
        curr_cnt++;
    }

    // Loop through the rest of the icebergs
    for (int i = 1; i < n; i++) {
        // If the previous iceberg is submerged and the current one is floating
        if (ice_berg[i - 1] <= curr_height && ice_berg[i] > curr_height) {
            curr_cnt++;
        }
    }

    return curr_cnt;
}

int main() {
    cin >> n;
    ice_berg.resize(n);

    // Read the heights of the icebergs
    for (int i = 0; i < n; i++) {
        cin >> ice_berg[i];
    }

    int max_cnt = 0;
    int max_height = *max_element(ice_berg.begin(), ice_berg.end());

    // Complete search through all possible heights
    for (int i = 0; i < max_height; i++) {
        max_cnt = max(max_cnt, simulate(i));
    }

    // Output the maximum count of floating icebergs
    cout << max_cnt << endl;

    return 0;
}