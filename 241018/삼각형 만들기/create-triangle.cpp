#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int farea(int i, int j, int k);
signed int A[10000010];
signed int B[10000010];

int main() {
    int N, i, j, k, area, maxarea = 0;
    scanf("%d", &N);
    
    for (i = 0; i < N; i++) {
        scanf("%d %d", &A[i], &B[i]);
    }

    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            for (k = j + 1; k < N; k++) {
                // 괄호로 우선순위를 명확히 조정
                if ((A[i] == A[j] || A[j] == A[k] || A[k] == A[i]) &&
                    (B[i] == B[j] || B[j] == B[k] || B[k] == B[i])) {
                    area = farea(i, j, k);
                    maxarea = fmax(area, maxarea);
                }
            }
        }
    }
    
    printf("%d", maxarea);
    return 0;
}

int farea(int i, int j, int k) {
    return abs((A[i] * B[j] + A[j] * B[k] + A[k] * B[i]) -
               (A[j] * B[i] + A[k] * B[j] + A[i] * B[k]));
}