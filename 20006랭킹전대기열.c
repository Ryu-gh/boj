#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    int level;
    char name[17];
}Player;

typedef struct {
    int base_level;
    int size;
    Player players[300];
}Room;

int compare_player(const void* a, const void* b) {
    Player* p1 = (Player*)a;
    Player* p2 = (Player*)b;
    return strcmp(p1->name, p2->name);
}

int n, m;
Player players[300];
Room rooms[501];
int counts = 0;

int main() {
    scanf_s("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf_s("%d %s", &players[i].level, players[i].name);
    }

    rooms[counts].base_level = players[0].level;
    rooms[counts].size = 1;
    rooms[counts].players[0] = players[0];
    counts++;

    for (int i = 1; i < n; i++) {
        int now_level = players[i].level;
        int placed = 0;

        for (int j = 0; j < counts; j++) {
            if (abs(rooms[j].base_level - now_level) <= 10) {
                if (rooms[j].size < m) {
                    rooms[j].players[rooms[j].size++] = players[i];
                    placed = 1;
                    break;
                }
            }
        }
        if (!placed) {
            rooms[counts].base_level = now_level;
            rooms[counts].size = 1;
            rooms[counts].players[0] = players[i];
            counts++;
        }
    }
    for (int i = 0; i < counts; i++) {
        qsort(rooms[i].players, rooms[i].size, sizeof(Player), compare_player);

        if (rooms[i].size == m) {
            printf("Started!\n");
        }
        else {
            printf("Waiting!\n");
        }

        for (int j = 0; j < rooms[i].size; j++) {
            printf("%d %s\n", rooms[i].players[j].level, rooms[i].players[j].name);
        }
    }
    return 0;
}