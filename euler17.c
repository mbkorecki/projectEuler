//
//  euler17.c
//  
//
//  Created by Marcin Korecki on 13.11.2017.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    
    int arr[1000];
    arr[0] = 0;
    arr[100] = 10;
    int letterSum = 11;
    
    for (int i = 1; i < 100; i++) {
        if ((i >= 70 && i < 80) || (i >= 90))
            arr[i] = arr[i / 10] + arr[i % 10] + 2;
        if (i >= 80 && i < 90)
            arr[i] = 6 + arr[i % 10];
        if (i >= 40 && i < 70)
            arr[i] = 5 + arr[i % 10];
        if (i > 20 && i < 40)
            arr[i] = 6 + arr[i % 10];
        if (i == 1 || i == 2 || i == 6 || i == 10)
            arr[i] = 3;
        if (i == 3 || i == 7 || i == 8)
            arr[i] = 5;
        if (i == 4 || i == 5 || i == 9)
            arr[i] = 4;
        if (i == 11 || i == 12)
            arr[i] = 6;
        if (i == 13 || i == 14  || i == 19 || i == 18)
            arr[i] = 8;
        if (i == 17)
            arr[i] = 9;
        if (i == 16 || i == 15)
            arr[i] = 7;
        if (i == 20)
            arr[i] = 6;
    }
    for (int i = 1; i <= 999; i++) {
        if (i < 100)
            letterSum += arr[i];
        else
            if (i % 100 == 0)
                letterSum += arr[i/100] + 7;
            else
                letterSum += arr[i / 100] + 10 + arr[i % 100];
    }
    printf ("%d\n", letterSum);
}
