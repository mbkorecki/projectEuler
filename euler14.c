//
//  euler14.c
//
//
//  Created by Marcin Korecki on 08.11.2017.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int memoryArray[1000000000];
int main (int argc, char *argv[]) {
    long long highestNumber, originalNumber;
    int numberOfTerms, highestTerms = 0;
    long long number = 1;
    
    for (originalNumber = 1; originalNumber < 1000000; originalNumber++) {
        numberOfTerms = 0;
        number = originalNumber;
        while (number != 1) {
            if (number < 1000000000 && memoryArray[number] != 0) {
                numberOfTerms += memoryArray[number];
                number = 1;
            }
            else {
                if (number % 2)
                    number = 3 * number + 1;
                else
                    number /= 2;
                numberOfTerms++;
            }
        }
        memoryArray[originalNumber] = numberOfTerms;
        if (numberOfTerms > highestTerms) {
            highestTerms = numberOfTerms;
            highestNumber = originalNumber;
        }
    }
    printf ("number = %lld, sequence = %d\n", highestNumber, highestTerms);
}
