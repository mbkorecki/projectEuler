//
//  euler15.c
//
#include <stdio.h>
#include <math.h>
#include <time.h>


long long int memory[21][21];
long long int latticeRoutes (int right, int down) {
    if (right == 20 || down == 20)
        return 1;
    if (memory[right][down] != -1)
        return  memory[right][down];
    memory[right][down] = latticeRoutes (right+1, down) + latticeRoutes (right, down+1);
    return  memory[right][down];
}

int main (int argc, char *argv[]) {
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            memory[i][j] = -1;
        }
    }
    printf ("%lli\n", latticeRoutes (0, 0));
}
