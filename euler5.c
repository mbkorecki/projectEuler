//
//  euler5.c
//  
//
//  Created by Marcin Korecki on 29.10.2017.
//

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int number = 20;
    
    for(int i = 1; i <= 20; i++){
        if(number%i != 0){
            number++;
            i = 1;
        }
    }
    printf("%d\n", number);
}
