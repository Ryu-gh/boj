#include<stdio.h>
int main() {
    int X, N;
    int total = 0;
    int a, b;
    scanf_s("%d", &X);
    scanf_s("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf_s("%d %d", &a, &b);
        total += a * b;
    }
    if (X == total) {
        printf("Yes");
    }
    else {
        printf("No");
    }
}