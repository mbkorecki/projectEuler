//
//  euler19.c
//  
//
//  Created by Marcin Korecki on 19.11.2017.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main (int argc, char *argv[]) {
    int month = 1;
    int dayOfWeek = 2;
    int year = 1901;
    int firstSundays = 0;
    
    while (year < 2001) {
        if (dayOfWeek == 7) {
            firstSundays++;
                printf ("day = %d, month = %d, year = %d\n", dayOfWeek, month, year);
        }
        if (month == 2) {
            if (year % 4 == 0)
                dayOfWeek++;
        }
        if (month == 4 || month == 6 || month == 9 || month == 11)
            dayOfWeek += 2;
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            dayOfWeek += 3;
        month++;
        if (dayOfWeek > 7)
            dayOfWeek -= 7;
        if (month > 12) {
            month -= 12;
            year++;
        }
    }
    printf ("%d\n", firstSundays);
}
