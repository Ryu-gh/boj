#include<stdio.h>
int main() {
    int a, b, v, d;
    scanf_s("%d %d %d", &a, &b, &v);
    d = (v - b - 1) / (a - b) + 1;
    printf("%d", d);
}