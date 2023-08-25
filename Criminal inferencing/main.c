#include <stdio.h>
#include <stdlib.h>

int main()
{
int A=0||1;
int B=0||1;
int C=0||1;
int D=0||1;
 if (((A!=1)&&(C=1)&&(D=1)||(D!=1))==(D=1))
    printf("Criminal is D");
 else if (((A!=1)&&(C=1)&&(D!=1)||(D=1))==(C=1))
    printf("Criminal is C");
 else if (((A!=1)&&(D=1)&&(D!=1)||(C=1))==(B=1))
    printf("Criminal is B");
 else if (((C=1)&&(D=1)&&(D!=1)||(A!=1))==(A=1))
    printf("Criminal is A");

    return 0;
}
