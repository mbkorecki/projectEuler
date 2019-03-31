//
//  euler4.c
//  
//
//  Created by Marcin Korecki on 28.10.2017.
//

#include <stdio.h>
#include <math.h>

int reverse(int n){
    int reversed = 0;
    while (n >0){
        reversed = 10*reversed + n%10;
        n = n/10;
    }
    return reversed;
}
int main(int argc, char *argv[]) {
    int palindrome = 0;
    for(int i = 100; i <= 999; i++){
        for(int j = 100; j <= 999; j++){
            if(i*j == reverse(i*j)){
                if(i*j > palindrome)
                    palindrome = i*j;
            }
        }
    }
    printf("%d\n", palindrome);
}
