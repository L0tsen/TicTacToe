#include <stdio.h>
int main () {
        int array[3][3] ={{0,0,0},{0,0,0},{0,0,0}};
        int x;
        int y;
        int lpm = 2;
        int tre = 0;
        int turns = 0;
        while (tre == 0) {
        printf("Where would you like to place?\n");
        scanf("%d%d", &y,&x);
        if (array [x][y] > 0) {continue;}
/*      printf("%i\n", x);
        printf("%i\n", y); */

        if (lpm == 2)
                { array [x][y] = 1;
                lpm = 1;}
        else
                {array [x][y] = 2;
                lpm = 2;}

        printf("%i", array [0][0]);
        printf("%i", array [0][1]);
        printf("%i\n", array [0][2]);
        printf("%i", array [1][0]);
        printf("%i", array [1][1]);
        printf("%i\n", array [1][2]);
        printf("%i", array [2][0]);
        printf("%i", array [2][1]);
        printf("%i\n", array [2][2]);
        if ((array [0][0] == array [0][1]) && (array [0][1] == array [0][2]) && (array [0][0] > 0)) {tre = array [0][0];}
        if ((array [1][0] == array [1][1]) && (array [1][1] == array [1][2]) && (array [1][0] > 0)) {tre = array [1][0];}
        if ((array [2][0] == array [2][1]) && (array [2][1] == array [2][2]) && (array [2][0] > 0)) {tre = array [2][0];}
        if ((array [0][0] == array [1][0]) && (array [1][0] == array [2][0]) && (array [0][0] > 0)) {tre = array [0][0];}
        if ((array [0][1] == array [1][1]) && (array [1][1] == array [2][1]) && (array [0][1] > 0)) {tre = array [0][1];}
        if ((array [0][2] == array [1][2]) && (array [1][2] == array [2][2]) && (array [0][2] > 0)) {tre = array [0][2];}
        if ((array [0][0] == array [1][1]) && (array [1][1] == array [2][2]) && (array [0][0] > 0)) {tre = array [0][0];}
        if ((array [2][0] == array [1][1]) && (array [1][1] == array [0][2]) && (array [2][0] > 0)) {tre = array [2][0];}
        turns = turns +1;
        if (turns == 9){tre = 3;}
}
        if (tre == 1){printf("Player 1 won\n");}
                else if (tre == 2){printf("Player 2 won\n");}
                        else printf("No one won :c \n");
return 0;}

