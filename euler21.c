//
//  euler21.c
//  
//
//  Created by Marcin Korecki on 21.11.2017.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10000

int sumDivisors (int number) {
    int sum = 0;
    int temp;
    for (int i = 1; i < sqrt(number); i++) {
        if (number % i == 0) {
            sum += i;
            temp = number / i;
            if (temp != number)
            {
                sum += temp;
            }
        }
    }
    return sum;
}
int sumArray [MAX];
int main (int argc, char *argv[]) {
    clock_t begin = clock(); //time measuring function
    int amicableSum = 0;
    
    for (int i = 1; i < MAX; i++) {
        sumArray [i] = sumDivisors (i);
        if (i != sumArray [i] && sumDivisors (sumArray [i]) == i) {
            amicableSum += i;
          //  printf ("i = %d, sumArray[i] = %d, sumDivisors (sumArray[i]) = %d\n", i, sumArray [i], sumDivisors (sumArray [i]));
        }
    }
    printf ("%d\n", amicableSum);
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf ("%f\n", time_spent);
    return 0;
}
