#include<stdio.h>
//declaration of structure
struct player
{
    int id;
    int lvl;
    char initial;
};

int main()
{
    //entering some data to structure
    struct player plr1;
    plr1.id = 007;
    plr1.lvl = 77;
    plr1.initial = 'j';
    
    //prints the size of structure
    printf("size of structure :%ld\n",sizeof(plr1));
    
    //declaring array
    char jd[]="jerome moses";
    //prints the size of array
    printf("size of array :%ld",sizeof(jd));
}

/*
size of structure :12
size of array :13
*/