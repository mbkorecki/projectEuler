//
//  euler13.c
//
//
//  Created by Marcin Korecki on 07.11.2017.
//

#include <stdio.h>
#include <math.h>
int main (int argc, char *argv[]) {
    char array[100][50];
    int i, j;
    for (i = 0; i < 100; i++) {
        for (j = 0; j < 50; j++) {
            scanf ("%c", &array[i][j]);
        }
    }
    
    int result[50];
    int columnSum = 0;
    for (j = 49; j >= 0; j--) {
        for (i = 0; i < 100; i++) {
            columnSum += array[i][j] - '0';
        }
        if (columnSum != 0) {
            result[j] = columnSum % 10;
            if (j == 0)
                result[j] = columnSum;
            columnSum /= 10;
        }
        else
            result[j] = 0;
    }
    for (i = 0; i <= 49; i++)
        printf ("%d", result[i]);
    return 0;
}
