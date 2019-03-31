//
//  euler12.c
//
#include <stdio.h>
#include <math.h>
#include <time.h>

int main (int argc, char *argv[])
{
    clock_t begin = clock(); //time measuring function
    int triangularNumber = 1; //the current triangle number
    int numberOfDivisors = 0; //stores the number of divisors for the current triangular number
    int howManyNumbers = 2; //how many triangular numbers have we investigated
    int stored; //storage variable for the triangular number
    int divisor;
    while (numberOfDivisors < 500) {
        //the loop runs until we find a triangular number with 500 or more divisors
        triangularNumber += howManyNumbers; //method of calculating the next triangular number
        stored = triangularNumber;
        divisor = 1;
        numberOfDivisors = 0;
        while (divisor < stored) {
            //this loop runs until we have generated all divisors of a given number
            if (triangularNumber % divisor == 0) {
                //if we find a divisor we increment the number of divisors by 2 (since when a number is divisible by a given number it is also divisible by the result of the division).
                numberOfDivisors += 2;
                //we decrement the condition of our loop so that we do not generate too many numbers that are not divisors of the triangular number.
                stored = triangularNumber / divisor;
            }
            divisor++;
        }
        howManyNumbers++;
    }
    printf ("%d\n", triangularNumber);
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf ("%f\n", time_spent);
    return 0;
}
