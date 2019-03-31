//
//  euler1.c
//
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int sum1 = 0;
    int sum2 = 0;
    int i;
    for(i = 3; i < 1000; i += 3){
        sum1 = sum1 + i;
    }

    for(i = 5; i < 1000; i += 5){
        if(i%3 != 0)
            sum2 = sum2 + i;
    }
    
    printf("%d\n", sum1 + sum2);
    return 0;
}
