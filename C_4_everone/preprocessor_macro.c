#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define maximum_human_weight 140
#define minimum_human_weight 45

#define range 70
#define population 1000
#define weight_over rand() % range
#define weight weight_over + minimum_human_weight
#define FILL    for (int i = 0; i < population; i++) \
                    db[i] = weight;

void print_data(int d[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", d[i]);
        if ((i+1) % 10 == 0) printf("\n");       
    }
}

void main()
{
   int i;
   int db[population];
   srand(time(0));
   FILL;
   print_data(db, population);
   printf("\n\n");
}