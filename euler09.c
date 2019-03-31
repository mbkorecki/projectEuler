//
//  euler9.c
//
//
//  Created by Marcin Korecki on 28.10.2017.
//

#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]) {
    int a = 0;
    int b = 1;
    int product = 0;
    // a+b+c = 1000
    // a*a+b*b = c*c
    // a+b<=c, a+c<=b, c+b<=a
    while (a + b + sqrt(a*a+b*b) <= 1000){
        while (a + b + sqrt(a*a+b*b) <= 1000){
            if (a + b + sqrt(a*a+b*b) == 1000){
                product = a*b*sqrt(a*a+b*b);
                printf("a=%d, b=%d, c=%f\n", a, b, sqrt(a*a+b*b));
            }
            b++;
        }
        b = 1;
        a++;
    }
    printf("%d\n", product);
}
