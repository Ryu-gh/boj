#include<stdio.h>
#include<string.h>
int main() {
    char num[11] = { 0, };
    char tmp;
    scanf_s("%s", num);
    for (int i = 0; i < strlen(num) - 1; i++) {
        for (int j = 0; j < strlen(num); j++) {
            if (num[j] < num[j + 1]) {
                tmp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < strlen(num); i++) {
        printf("%c", num[i]);
    }
}