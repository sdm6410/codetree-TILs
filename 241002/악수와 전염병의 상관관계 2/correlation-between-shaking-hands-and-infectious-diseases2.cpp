#include <iostream>
#define MAX 250
using namespace std;
int handshake[MAX + 1][2];
int infected[101];

int main() {
    int n, k, p, t;
    cin >> n >> k >> p >> t;
    
    infected[p] = 1;
    
    for (int i = 0; i < t; i++) {
        int t1;
        cin >> t1;
        cin >> handshake[t1][0] >> handshake[t1][1];
    }
    //cout<< handshake[6][0]<< ' '<< handshake[6][1];

    for (int i = 0; i < MAX; i++) {
        if (infected[handshake[i][0]] > 0 && infected[handshake[i][0]] <= k) {
            infected[handshake[i][0]]++;
            infected[handshake[i][1]]++;
        } else if (infected[handshake[i][1]] > 0 && infected[handshake[i][1]] <= k) {
            infected[handshake[i][0]]++;
            infected[handshake[i][1]]++;
        }
    }
    for (int i = 1; i < n + 1; i++) {
        if (infected[i] > 0) {
            cout << 1;
        } else {
            cout << 0;
        }
    }

    return 0;
}