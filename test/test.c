#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "xbinary.h"

void failed() {
    puts("FAILED");
    exit(1);
}

int main() {
    
    unsigned int rotateleft = 34231;
    if (rotl(rotateleft, 25) != 1845494027) {
        failed();
    }
    unsigned long long rotateright = 324768;
    if (rotr(rotateright, 63) != 649536) {
        failed();
    }
    
    print_bin((int) 123);
    fprint_bin(stderr, (short) 7878);
    double k = 12.331;
    fprint_bin(stdout, *(unsigned long long*) &k);

    unsigned char c = HIGHESTBIT(char);
    if (c != 128) {
        failed();
    }

    if((unsigned char) HIGHESTBIT(char) != 128) {
        failed();
    }

    puts("Checks passed");

    return 0;
}

