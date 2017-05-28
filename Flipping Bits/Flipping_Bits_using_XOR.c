#include <stdio.h>

#define MASK_ALL_1s 0xFFFFFFFF

int main()
{
    unsigned int current_number, flipped_number;
    scanf("%u", &current_number);

    //Flips all the 1s to 0s and all the 0s to 1s.
    flipped_number = current_number^MASK_ALL_1s;

    printf("%u\n",flipped_number);
    return 0;
}
