#include <stdio.h>

int apply_brian_kerningham(int number)
{
    int no_of_1s = 0;

    /*Let n be represented by the binary string consisting of some number of 0s and 1s, the rightmost 1s and then some number of terminating 0s.
    Then, n-1 can be represented by the binary string which is exactly the same before the rightmost 1, and everything from the rightmost 1 is toggled.
    In other words, n can be written as a regular expression - (0 + 1)^x (1) (0)^y,  where x and y are non-negative numbers.
    n-1 is (0 + 1)^x (0) (1)^y
    AND-ing n and n-1 gives us (0 + 1)^x 0^{y+1}.
    Applying n&(n-1), removes the rightmost set bit. We keep applying this till we get 0 i.e. till all the set bits are reset.*/

    while(number != 0)
    {
        no_of_1s++;
        number = (number & (number - 1));
    }
    return no_of_1s;
}
int main()
{
    int number, number_of_1s;
    printf("Which number do you want to count the number of set bits of ?\n");
    scanf("%d",&number);

    number_of_1s = apply_brian_kerningham(number);
    printf("%d has %d 1s in it's binary representation.\n",number, number_of_1s);
    return 0;
}
