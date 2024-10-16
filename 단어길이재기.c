#include<stdio.h>
#include<string.h>
int main() {
    char text[100];
    scanf_s("%s", &text);
    printf("%d", strlen(text));
}