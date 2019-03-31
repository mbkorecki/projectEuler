//
//  euler3.c
//  
//
//  Created by Marcin Korecki on 28.10.2017.
//

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    long factor = 2;
    long lastFactor = 1;
    long i = 600851475143;
    while(i > 1){
        if(i%factor == 0){
            lastFactor = factor;
            i = i/factor;
            while(i%factor == 0)
                i = i/factor;
        }
        factor++;
    }
    printf("%ld\n", lastFactor);
    
    return 0;
}
