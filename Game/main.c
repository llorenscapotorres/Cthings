#include <stdio.h>

#define UP 1
#define DOWN 2
#define RIGHT 3
#define LEFT 4

/*
r o o o o
o o o o o
o o o o o
o o o o x
*/

int main(void) {
    int dir;

    printf("Press 1 to UP.\nPress 2 to move DOWN.\nPress 3 to RIGHT.\nPress 4 to move LEFT.");
    printf("\nYou're \"r\", and you must reach \"x\".\n");

    printf("Map:\nr o o o\no o o o\no o o o\no o o x\n");

    printf("Select a DIRECTION: ");
    scanf("%1d", &dir);

    printf("First Round!\n");

    switch (dir) {
    case UP:
        printf("Error: Out of Bound.\n");
        break;
    case DOWN:
        printf("o o o o\nr o o o\no o o o\no o o x\n");
        break;
    case RIGHT:
        printf("o r o o\no o o o\no o o o\no o o x\n");
        break;
    case LEFT:
        printf("Error: Out of Bound\n");
        break;
    default:
        printf("Error: Invalid Direction.\n");
        break;
    }

    return 0;
}