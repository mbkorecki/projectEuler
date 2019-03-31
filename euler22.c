//
//  euler22.c
//  
//
//  Created by Marcin Korecki on 29.11.2017.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


char names[5000][15];
int main (int argc, char *argv[]) {
    int i = 0;
    int memory;
    while (i < 7000) {
        int j = -1;
        while (names[i][j] != ',' && names[i][j] != '.') {
            j++;
            scanf ("%c", &names[i][j]);
        }
        if (names[i][j] == '.') {
            memory = i;
            i = 7000;
        }
        i++;
    }
    
    for (i = 0; i < memory; i++) {
        if (names[i][1] > names[i+1][1]) {
            int temp = names[i+1][1];
            names[i+1][1] = names[i][1];
            names[i][1]  = temp;
        }
    }
    i = 0;
   
    
}
