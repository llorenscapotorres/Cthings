/*
User decides the dimesions of the map, as well as the position of the player (r) and tresure (x)
*/

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
	int nrows, ncols, xPlayerPosition, yPlayerPosition, xTreasurePosition, yTreasurePosition;

	while (1) {
		printf("Enter a valid number of rows: ");
		scanf("%d", &nrows);

		if (nrows <= 0) {
			continue;
		}

		break;
	}

	while (1) {
		printf("Enter a valid number of columns: ");
		scanf("%d", &ncols);

		if (ncols <= 0) {
			continue;
		}

		break;
	}

	while (1) {
		printf("Enter a valid X position of the player: ");
		scanf("%d", &xPlayerPosition);

		if ((xPlayerPosition < 0) || (xPlayerPosition >= ncols)) {
			continue;
		}

		break;
	}

	while (1) {
		printf("Enter a valid Y position of the player: ");
		scanf("%d", &yPlayerPosition);

		if ((yPlayerPosition < 0) || (yPlayerPosition >= nrows)) {
			continue;
		}

		break;
	}

	while (1) {
		printf("Enter a valid X position of the treasure: ");
		scanf("%d", &xTreasurePosition);

		if ((xTreasurePosition < 0) || (xTreasurePosition >= ncols)) {
			continue;
		}

		break;
	}

	while (1) {
		printf("Enter a valid Y position of the treasure: ");
		scanf("%d", &yTreasurePosition);

		if ((yTreasurePosition < 0) || (yTreasurePosition >= nrows)) {
			continue;
		}

		break;
	}

	printf("You've created the following map:\n\n");
	for (int i = 0; i < ncols; i++) {
		if (((i + 1) == ncols) && (i != nrows)) {
			printf("\n");
			i = 0;
		}
		printf("o\t");
	}

    return 0;
}
