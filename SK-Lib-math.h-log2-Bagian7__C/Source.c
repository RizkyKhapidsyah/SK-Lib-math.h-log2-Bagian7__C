#pragma warning(disable:4996)
#pragma fenv_access (on)

#include <stdio.h>
#include <math.h>
#include <float.h>
#include <errno.h>
#include <fenv.h>
#include <conio.h>

/*  Source by CPPReference
    Modified For Learn by Rizky Khapidsyah
    I.D.E : VS2019 */

int main(void) {
    printf("log2(23546) = %f\n", log2(23546));
    printf("log2(0.094) = %f\n", log2(0.094));
    printf("log2(0x022f) = %f (highest set bit is in position 9)\n", log2(0x022f));
    printf("base-5 logarithm of 213 = %f\n", log2(213) / log2(5));
    // special values
    printf("log2(1) = %f\n", log2(1));
    printf("log2(+Inf) = %f\n", log2(INFINITY));
    //error handling
    errno = 0; feclearexcept(FE_ALL_EXCEPT);
    printf("log2(0) = %f\n", log2(0));

    if (errno == ERANGE) {
        perror("    errno == ERANGE");
    }

    if (fetestexcept(FE_DIVBYZERO)) {
        puts("    FE_DIVBYZERO raised");
    }

    _getch();
    return 0;
}