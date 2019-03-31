//
//  euler10.c
//
//
//  Created by Marcin Korecki on 28.10.2017.
//

#include <stdio.h>
#include <math.h>

int isPrime (int number){
    for (int i = 3; i <= floor(sqrt(number)); i+=2){
        if (number%i == 0)
            return 0;
    }
    return 1;
}
int main (int argc, char *argv[]) {
    long sum = 2;
    for (int i = 3; i < 2000000; i+=2){
        if(isPrime(i))
            sum += i;
    }
    printf("%ld\n", sum);
}
