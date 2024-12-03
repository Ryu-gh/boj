#include <stdio.h>
#include "room.h"

int main() {
    int n, m;
    Player players[300];
    Room rooms[501];
    int room_count = 0;

    scanf_s("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf_s("%d %s", &players[i].level, players[i].name);
    }

    handle_player_assignment(players, rooms, n, m, &room_count);

    print_rooms(rooms, room_count, m);

    return 0;
}
