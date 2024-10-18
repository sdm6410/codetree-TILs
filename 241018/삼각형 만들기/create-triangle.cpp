#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<int, vector<int>> x_map; // x좌표별 y좌표 저장
    map<int, vector<int>> y_map; // y좌표별 x좌표 저장
    
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        x_map[x].push_back(y);
        y_map[y].push_back(x);
    }
    
    int max_area = 0;
    
    // x좌표별로 같은 x좌표를 갖는 y좌표들 사이의 최대 차이 계산
    for (auto &entry : x_map) {
        vector<int> &y_values = entry.second;
        if (y_values.size() < 2) continue;
        
        // y값들 중 최소, 최대값을 찾아서 차이 계산
        int y_min = *min_element(y_values.begin(), y_values.end());
        int y_max = *max_element(y_values.begin(), y_values.end());
        int height = y_max - y_min;
        
        // 같은 x좌표의 점들 중 y차이가 큰 경우를 찾으면, 이를 높이로 사용
        for (auto &y_entry : y_map) {
            vector<int> &x_values = y_entry.second;
            if (x_values.size() < 2) continue;
            
            // x값들 중 최소, 최대값을 찾아서 차이 계산
            int x_min = *min_element(x_values.begin(), x_values.end());
            int x_max = *max_element(x_values.begin(), x_values.end());
            int width = x_max - x_min;
            
            // x, y 차이로 계산한 넓이 업데이트
            max_area = max(max_area, width * height);
        }
    }
    
    // 출력: 최대 넓이에 2를 곱한 값
    cout << max_area << endl;
    
    return 0;
}