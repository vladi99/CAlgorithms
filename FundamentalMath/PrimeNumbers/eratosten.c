//
// Created by vladi on 2/26/18.
//

#include <stdio.h>
#include "eratosten.h"


void eratosten(int n) {
    int sieve[n];
    int j, i = 2;
    while (i <= n) {
        if (sieve[i] != 1) {
            printf("%5d", i);
            j = i * i;
            while (j <= n){
                sieve[j] = 1;
                j += i;
            }
        }
        i++;
    }
}