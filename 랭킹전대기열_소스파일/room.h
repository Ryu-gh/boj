#ifndef ROOM_H
#define ROOM_H

typedef struct {
    int level;
    char name[17];
} Player;

typedef struct {
    int base_level;
    int size;
    Player players[300];
} Room;

int compare_player(const void* a, const void* b);
void add_player_to_room(Room* room, Player player);
int can_add_to_room(Room room, Player player, int max_size);
void handle_player_assignment(Player* players, Room* rooms, int n, int m, int* room_count);
void print_rooms(Room* rooms, int room_count, int m);

#endif 
#pragma once
