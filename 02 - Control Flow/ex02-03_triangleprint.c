#include <stdio.h>

int main() {

    typedef int counter;
    counter row = 1;
    int N = 6;
    for (row = 1; row <= N; row++) {
        // print spaces
        int spaces = ((2 * N) / 2) - row;
        int stars = N - spaces;
        int count = 1;
        for (count = 1; count <= spaces; count++) {
            printf(" ");
        }
        count = 1;
        if (row == 1) {
            for (count = 1; count <= stars; count++) {
                printf("*");
            }
        }
        if (row > 1) {
            stars = (stars * 2) - 1;
            for (count = 1; count <= stars; count++) {
            printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}