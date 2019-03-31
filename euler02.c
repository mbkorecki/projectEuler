//
//  euler2.c
//  
//
//  Created by Marcin Korecki on 28.10.2017.
//

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int sum = 2;
    int term1 = 1;
    int term2 = 2;
    int newTerm = 0;
    while(newTerm <= 4000000){
        newTerm = term1 + term2;
        term1 = term2;
        term2 = newTerm;
        if(newTerm%2 == 0){
            sum += newTerm;
        }
    }
    printf("%d\n",sum);
}
