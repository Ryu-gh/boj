#include<stdio.h>
#include<string.h>
int main() {
    int T, R;
    char S[21];
    scanf_s("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf_s("%d %s", &R, &S);
        for (int j = 0; j < strlen(S); j++) {
            for (int k = 0; k < R; k++) {
                printf("%c", S[j]);
            }
        }
        printf("\n");
    }
}