#include<stdio.h>
#include<string.h>
int main() {
    int M;
    char arr[21];
    scanf("%d", &M);
    while (M) {
        char command[7];
        int num;
        scanf("%s", command);
        if (!strcmp(command, "add")) {
            scanf("%d", &num);
            arr[num] = 1;
        }
        else if (!strcmp(command, "remove")) {
            scanf("%d", &num);
            arr[num] = 0;
        }
        else if (!strcmp(command, "check")) {
            scanf("%d", &num);
            if (arr[num])
                printf("1\n");
            else
                printf("0\n");
        }
        else if (!strcmp(command, "toggle")) {
            scanf("%d", &num);
            if (arr[num])
                arr[num] = 0;
            else
                arr[num] = 1;
        }
        else if (!strcmp(command, "all")) {
            for (int i = 1; i <= 20; i++) {
                arr[i] = 1;
            }
        }
        else if (!strcmp(command, "empty")) {
            for (int i = 1; i <= 20; i++) {
                arr[i] = 0;
            }
        }
        M--;
    }
}