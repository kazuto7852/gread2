#include"func.h"
#include<stdio.h>
#include"VECTOR.h"
void init(VECTOR* player) {
	player->x = 0;
	player->y = 0;
}
void draw(VECTOR* player) {
	printf("%d\n", player->x);
	printf("%d\n", player->x);
}