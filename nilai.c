#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf ("%-20s: %d..%d\n","char",CHAR_MIN, CHAR_MAX);
    printf ("%-20s: %d..%d\n","signed char",SCHAR_MIN, SCHAR_MAX);
    printf ("%-20s: %u..%d\n","unsigned char", 0, UCHAR_MAX);
    printf ("%-20s: %d..%d\n","short",SHRT_MIN, SHRT_MAX);
    printf ("%-20s: %u..%d\n","unsigned short",0,USHRT_MAX);
    printf ("%-20s: %d..%d\n","int", INT_MIN, INT_MAX);
    printf ("%-20s: %u..%u\n","unsigned int",0,UINT_MAX);
    printf ("%-20s: %ld..%ld\n","long", LONG_MIN, LONG_MAX);
    printf ("%-20s: %u..%lu\n","unsigned long",0,ULONG_MAX);
    printf ("%-20s: %lld..%lld\n","long long", LLONG_MIN, LLONG_MAX);
    printf ("%-20s: %u..%llu\n","unsigned long long",0,ULLONG_MAX);
    printf ("%-20s: %e..%e\n","float", FLT_MIN, FLT_MAX);
    printf("%-20s: %e..%e\n","double", DBL_MIN, DBL_MAX);
    printf("%-20s: %Le..%Le\n","long double", LDBL_MIN, LDBL_MAX);
    
    return 0;
}
