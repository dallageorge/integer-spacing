#include <stdio.h>
#include <math.h>

int main()
{
    long int carry;
    unsigned long long int x,digits;
    scanf("%llu",&x);
    digits= log10(x) +1;


    for(int i=digits;i>0;i--){
        carry = x%(long int)((pow(10,i)));
        carry=carry/(long int)(pow(10,(i-1)));
        printf("%ld ",carry);

    }
    return 0;
}
