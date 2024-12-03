#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "room.h"

int compare_player(const void* a, const void* b) {
    Player* p1 = (Player*)a;
    Player* p2 = (Player*)b;
    return strcmp(p1->name, p2->name);
}

void add_player_to_room(Room* room, Player player) {
    room->players[room->size++] = player;
}

int can_add_to_room(Room room, Player player, int max_size) {
    return abs(room.base_level - player.level) <= 10 && room.size < max_size;
}

void handle_player_assignment(Player* players, Room* rooms, int n, int m, int* room_count) {
    rooms[0].base_level = players[0].level;
    rooms[0].size = 1;
    rooms[0].players[0] = players[0];
    *room_count = 1;

    for (int i = 1; i < n; i++) {
        int placed = 0;
        for (int j = 0; j < *room_count; j++) {
            if (can_add_to_room(rooms[j], players[i], m)) {
                add_player_to_room(&rooms[j], players[i]);
                placed = 1;
                break;
            }
        }
        if (!placed) {
            rooms[*room_count].base_level = players[i].level;
            rooms[*room_count].size = 1;
            rooms[*room_count].players[0] = players[i];
            (*room_count)++;
        }
    }
}

void print_rooms(Room* rooms, int room_count, int m) {
    for (int i = 0; i < room_count; i++) {
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
}
