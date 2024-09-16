#include <iostream>
using namespace std;

int n;
int x1[101], x2[101];
int check[201];

int main() {
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x1[i] >> x2[i];

        x1[i] += 100;
        x2[i] += 100;
    }
    for(int i = 0; i < n; i++){
        for(int j = x1[i]; j < x2[i]; j++){
            check[j]++;
        }
    }
    int max = 0; 
    for(int i = 0; i < 200; i++){
        if(check[i] > max){
            max = check[i];
        }
    }
    cout << max;
    return 0;
}