#include<stdio.h>
int main() {
    int arr[10][10];
    int num;
    int max = -1;
    int x, y;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            scanf_s("%d", &num);
            arr[i][j] = num;
        }
    }
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (max < arr[i][j]) {
                max = arr[i][j];
                x = i;
                y = j;
            }
        }
    }
    printf("%d\n", max);
    printf("%d %d", x, y);
}