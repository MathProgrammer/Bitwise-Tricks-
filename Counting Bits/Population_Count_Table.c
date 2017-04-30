#include <stdio.h>
#include <stdlib.h>

void build_population_count_table(int *population_count_table, int size_of_table)
{
    int i;

    *(population_count_table + 0) = 0;
    *(population_count_table + 1) = 1;

    for(i = 2; i <= size_of_table; i++)
    {
        //f(2x) = f(x) because the binary string of x is just right shifted with a 0 appended
        //f(2x + 1) = f(x) + 1, the binary string of x is right shifted with a 1 appended
        //Writing this in one equation, as f(n) = f(n/2) + (n mod 2)
        *(population_count_table + i) = *(population_count_table + i/2) + (i % 2);
    }
}

void display(int *population_count_table, int size_of_table)
{
    int i;
    for(i = 1; i <= size_of_table; i++)
    {
        printf("%d\t%d\n",i,*(population_count_table + i));
    }
}

int main()
{
    int size_of_table;
    printf("Till what number do you want do you want to see the population count table ?\n");
    scanf("%d", &size_of_table);

    int *population_count_table = malloc((size_of_table + 1)*sizeof(int));
    build_population_count_table(population_count_table, size_of_table);

    display(population_count_table, size_of_table);
    free(population_count_table);
    return 0;
}

