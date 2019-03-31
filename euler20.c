//
//  euler20.c
//  
//
//  Created by Marcin Korecki on 19.11.2017.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int multiply(int number, int resultArray[], int length) {
    int carry = 0;
    for (int i = 0; i < length; i++) {
        int product = resultArray[i] * number + carry;
        resultArray[i] = product % 10;
        carry = product / 10;
    }
    while (carry) {
        resultArray[length] = carry % 10;
        carry = carry / 10;
        length++;
    }
    return length;
}

void factorial (int number) {
    int resultArray [200];
    resultArray[0] = 1;
    int length = 1;
    int sum = 0;
    
    for (int i = 2; i <= number; i++)
        length = multiply (i, resultArray, length);
    for (int i = length - 1; i >= 0; i--)
        sum += resultArray[i];
    printf("%d\n", sum);
}

int main (int argc, char *argv[]) {
    factorial (100);
    return 0;
}
