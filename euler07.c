//
//  euler3.c
//
//
//  Created by Marcin Korecki on 28.10.2017.
//

#include <stdio.h>
#include <math.h>

int isPrime (int number){
    for (int i = 2; i < number; i++){
        if (number%i == 0)
            return 0;
    }
    return 1;
        
}

int main (int argc, char *argv[]) {
    int primeCount = 0;
    int prime = 2;
    while (primeCount != 10001){
        if (isPrime(prime)){
            primeCount++;
        }
        prime++;
    }
    printf("%d\n", prime-1);
    return 0;
}
