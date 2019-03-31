//
//  euler16.c
//  
//
//  Created by Marcin Korecki on 12.11.2017.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    char array[500];
    int i;
    int sum = 0;
    for (i = 0; array[i-1] !='.'; i++) {
        scanf("%c", &array[i]);
        if (array[i] != '.')
            sum += array[i] - '0';
    }
    printf("%d\n", sum);
}
