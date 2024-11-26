#include<stdio.h>
#include<string.h>
int main() {
    char text[101];
    scanf_s("%s", text);
    for (int i = 0; i <= strlen(text) / 2; i++) {
        if (text[i] != text[strlen(text) - i - 1]) {
            printf("0");
            return 0;
        }
    }
    printf("1");
}