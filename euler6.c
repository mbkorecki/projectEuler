//
//  euler6.c
//
//
//  Created by Marcin Korecki on 29.10.2017.
//

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 1; i <= 100; i++){
        sum1 += i * i;
        sum2 += i;
    }
    printf("%d\n", sum2*sum2 - sum1);
    return 0;
}
