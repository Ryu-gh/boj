#include<stdio.h>
int main() {
    int N, M;
    int arr1[101][101], arr2[101][101];
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf_s("%d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf_s("%d", &arr2[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }
}