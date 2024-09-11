#include <iostream>
using namespace std;

// 두 숫자 중 더 큰 값을 반환하는 함수
int maxNum(int a, int b)
{
    return (a > b) ? a : b;
}

// 재귀적으로 배열의 최댓값을 구하는 함수
int findMax(int arr[], int n)
{
    // 배열에 원소가 하나 남았을 때, 그 값을 반환
    if (n == 1)
        return arr[0];

    // 배열의 마지막 원소와 나머지 배열에서 구한 최댓값을 비교
    return maxNum(arr[n - 1], findMax(arr, n - 1));
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    // 배열 입력 받기
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // 재귀함수를 이용해 배열의 최댓값을 구하고 출력
    cout << findMax(arr, n) << endl;

    return 0;
}