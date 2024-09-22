#include <iostream>
#include <vector>
#include <climits>  // INT_MAX 사용을 위해

using namespace std;

int main() {
    int N;
    cin >> N; 

    vector<int> rooms(N);  
    for (int i = 0; i < N; i++) {
        cin >> rooms[i];  
    }

    int ans = INT_MAX;  

    for (int i = 0; i < N; i++) {
        int dist = 0;

        for (int j = i; j < i + N; j++) {
            int room_idx = j % N; 
            dist += rooms[room_idx] * abs(j - i);
        }

        ans = min(ans, dist); 
    }
    cout << ans << endl;  

    return 0;
}