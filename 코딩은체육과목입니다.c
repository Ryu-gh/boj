#include<stdio.h>
int main() {
    int N;
    scanf_s("%d", &N);
    N /= 4;
    for (int i = 0; i < N; i++) {
        printf("long ");
    }
    printf("int");
}