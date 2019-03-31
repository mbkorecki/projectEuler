//
//  euler18.c
//  
//
//  Created by Marcin Korecki on 16.11.2017.
//

#include <stdio.h>
#include <math.h>
#include <time.h>

int max (int num1, int num2) {
    if (num1 > num2)
        return num1;
    return num2;
}

int arr[100][100];

int main(int argc, char *argv[]) {
    clock_t begin = clock(); //time measuring function
    //gets the input pyramid into an array
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < i + 1; j++) {
            scanf ("%d ", &arr[i][j]);
        }
    }
    for (int i = 1; i < 100; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0)
                arr[i][j] += arr[i-1][j];
            if (j == i)
                arr[i][j] += arr[i-1][i-1];
            if (j != 0 && j != i)
                arr[i][j] += max(arr[i-1][j-1], arr[i-1][j]);
        }
    }
    int max = 0;
    for (int i = 0; i < 100; i++) {
        if (arr[99][i] > max)
            max = arr[99][i];
    }
    printf ("%d\n", max);
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf ("%f\n", time_spent);
    return 0;
}
