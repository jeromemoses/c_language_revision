/*#include<stdio.h>
#include<string.h>
int main()
{
    static char *s[] = {"black", "white", "pink", "violet"};
    char **ptr[] = {s+3,s+2,s+1,s}, ***p;
    p = ptr;
    printf("%s",**p+1);
    printf("\n\n2.\n");
    
        int i = 3,*j,k;
        j = &i;
        printf("%d\n",i**j*i+*j);
        printf("\n\n3.\n");
    
        int x = 30, *y,*z;
        y = &x;
        //Assume address of x is 500 and integer is 4 byte size
        z = y; 
        *y++ = *z++;
        x++;
        printf("x = %d, y = %d, z = %d\n",x,y,z);
    
        printf("\n\n4.\n");
        char str1[20] = "Hello", str2[20] = "World";
        printf("%s\n",strcpy(str2, strcat(str1,str2)));
     
        printf("\n\n5.\n");
        char c[] = "%d\n";
        c[1] = 'c';
        printf(c,65);*/
        #include<stdio.h>
        int main()
        {
        printf("\n\n6.\n");
        int l[5] = {5,1,15,20,25};
        int i=0,q, e, o;
        q = ++l[1];
        e = l[1]++;
        o = l[q++];
        printf("%d, %d, %d",q,e,o);

}
