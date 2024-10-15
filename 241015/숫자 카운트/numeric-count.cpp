#include <iostream>
#include <vector>
using namespace std;
int arr[1000];
int main() {
    int n;
    cin>> n;

    vector<int> v;
    for(int t = 0; t < n; t++){
        string a;
        int b, c;
        cin>> a>> b>> c;
        for(int i = 1; i <= 9; i++){
            for(int j = 1; j <= 9; j++){
                for(int k = 1; k <= 9; k++){
                    // cnt1 : 1번 카운트, cnt2 : 2번 카운트
                    int cnt1 = 0, cnt2 = 0;
                    // 같은 수가 있는지 확인합니다.
                    if(i == j || j == k || i == k)
                        continue;
                    if(a[0] - '0' == i) cnt1++;
                    else if(a[0] - '0' == j || a[0] - '0' == k) 
                        cnt2++;
                    if(a[1] - '0' == j) cnt1++;
                    else if(a[1] - '0' == i ||  a[1] - '0' == k) 
                        cnt2++;
                    if(a[2] - '0' == k) cnt1++;
                    else if(a[2] - '0' == i || a[2] - '0' == j) 
                        cnt2++;
                    //조건을 만족한다면 v에 값을 집어넣기
                    if(cnt1 == b && cnt2 == c) {
                        v.push_back(100 * i + 10 * j + k);
                    }
                }
            }
        }
    }

    int cnt = 0;
    //arr의 v[i]값 인덱스 1 씩 증가
    for(int i = 0; i < v.size(); i++)
        arr[v[i]]++;
    //arr[i]의 값이 n 이라면 모든 조건을 만족하므로 cnt값이 증가
    for(int i = 1; i <= 999; i++)
        if(arr[i] == n) cnt++;
    cout<< cnt;
    return 0;
}