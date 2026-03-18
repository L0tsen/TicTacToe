#include <stdio.h>
#include <string.h>
int main() {
    char* array[] ={"---","---","---"}; // char* is a String
    int x, y; // initialise 2 variables at once
    int lpm = 2;
    char tre = 'z';
    int turns = 0;
    while (tre == 'z') {
        puts("Where would you like to place?");
        scanf("%d %d", &x,&y);
        if (array[x][y] != '-') continue; // you don't need {} with a single statement in if or for or yada-yada
        if (lpm == 2) {
            array[x][y] = 'x';
            lpm = 1;
        }
        else {
            array[x][y] = 'o';
            lpm = 2;
        }
        for (int i=0;i<3;i++) puts(array[i]); // puts prints a newline after a string or x-thing
        if (!strcmp(array[0],"xxx") || !strcmp(array[1],"xxx") || !strcmp(array[2],"xxx")) tre = 'x'; // strcmp gets a strang and compares it with another string
        if (!strcmp(array[0],"ooo") || !strcmp(array[1],"ooo") || !strcmp(array[2],"ooo")) tre = 'o';
        if (array[0][0] == array[1][0] && array[1][0] == array[2][0] && array[0][0] != '-') tre = array[0][0];
        if (array[0][1] == array[1][1] && array[1][1] == array[2][1] && array[0][1] != '-') tre = array[0][1];
        if (array[0][2] == array[1][2] && array[1][2] == array[2][2] && array[0][2] != '-') tre = array[0][2];
        if (array[0][0] == array[1][1] && array[1][1] == array[2][2] && array[0][0] != '-') tre = array[0][0];
        if (array[2][0] == array[1][1] && array[1][1] == array[0][2] && array[2][0] != '-') tre = array[2][0];
        turns++; // increment
        if (turns == 9) {
            puts("No one won :c");
            return 1;
        }
    }
    if (tre == 'x') puts("Player 1 won");
    else if (tre == 'o') puts("Player 2 won");
    return 0;
}
