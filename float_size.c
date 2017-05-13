#include <stdio.h>
#include <float.h>

int main()
{
    printf("size of float: %lu\n", sizeof(float));
    printf("minmum value of float: %E\n", FLT_MIN);
    printf("maximum value of float: %E\n", FLT_MAX);
    printf("Precision of float: %d\n", FLT_DIG);
}