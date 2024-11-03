#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

// Points vector to store (x, y) coordinates
vector<pair<int, int>> points;

// Function to get points on a vertical line x = k
vector<pair<int, int>> vertical(int k) {
    vector<pair<int, int>> curr_line;
    for (auto point : points) {
        int x = point.first;
        int y = point.second;
        if (x == k) {
            curr_line.push_back({x, y});
        }
    }
    return curr_line;
}

// Function to get points on a horizontal line y = k
vector<pair<int, int>> parallel(int k) {
    vector<pair<int, int>> curr_line;
    for (auto point : points) {
        int x = point.first;
        int y = point.second;
        if (y == k) {
            curr_line.push_back({x, y});
        }
    }
    return curr_line;
}

// Function to count unique points in three selected lines
int search(int a, int b, int c, vector<vector<pair<int, int>>>& points_belongs_to_line) {
    vector<pair<int, int>> line_1 = points_belongs_to_line[a];
    vector<pair<int, int>> line_2 = points_belongs_to_line[b];
    vector<pair<int, int>> line_3 = points_belongs_to_line[c];

    vector<pair<int, int>> curr_points_belongs_to_three_lines;

    // Adding unique points from each line
    auto add_unique_points = [&curr_points_belongs_to_three_lines](vector<pair<int, int>>& line) {
        for (auto point : line) {
            if (find(curr_points_belongs_to_three_lines.begin(), curr_points_belongs_to_three_lines.end(), point) == curr_points_belongs_to_three_lines.end()) {
                curr_points_belongs_to_three_lines.push_back(point);
            }
        }
    };

    add_unique_points(line_1);
    add_unique_points(line_2);
    add_unique_points(line_3);

    return curr_points_belongs_to_three_lines.size();
}

int main() {
    int n;
    cin >> n;
    
    // Input points
    points.resize(n);
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        points[i] = {x, y};
    }

    // Prepare lines
    vector<vector<pair<int, int>>> points_belongs_to_line;
    for (int i = 0; i < 10; i++) {
        points_belongs_to_line.push_back(vertical(i));
        points_belongs_to_line.push_back(parallel(i));
    }

    int max_point_cnt = 0;

    // Selecting 3 lines and finding the max points covered
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            for (int k = j + 1; k < 10; k++) {
                max_point_cnt = max(max_point_cnt, search(i, j, k, points_belongs_to_line));
            }
        }
    }

    // Output result
    if (max_point_cnt == n) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}