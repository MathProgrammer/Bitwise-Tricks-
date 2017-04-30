#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers \n");
    scanf("%d %d",&a, &b);
    printf("Old a = %d\tOld b = %d\n",a, b);

    //There are 3 kinds of set bits - bits set in both a and b, bits set only in a and bits set only in b
    a = a^b; //a now has all the bits set either (in a) or (in b), but not in both.
    b = a^b; //b now has all the bits set that are and (set only in a) and (bits set in both a and b). So, b has now become the old a.
    a = a^b; //a now has all the bits set that are (set only in b) and (set in both a and b).
    //Note - this doesn't work if they both point to the same memory location

    printf("New a = %d\tNew b = %d\n",a,b);
    return 0;
}
