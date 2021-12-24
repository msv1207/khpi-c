#include <stdio.h>
#include <math.h>

int main() {
    int i, j;
    int a[8][8];

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++)
            a[i][j] = i * j;
    }
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++)
            printf("%d ", a[i][j]);
        printf( "\n" );
    }
    for (i = 0; i < 8; i++) {
        a[i][i] = a[8-i][8-i];
        a[8-i][8-i] =  a[i][i];
    }
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++)
            printf("%d ", a[i][j]);
        printf( "\n" );
    }
    return 0;
}