#include<stdio.h>
#include<string.h>
int t;
int main()
{
	do
	{
		int jd;
		printf("\n1.enter your name to turn it into capital. \n2.enter your name to turn it into smaller. \n 3.print your name for multiple time. \n");
		scanf("%d",&jd);
        switch(jd)
        {
            case 1:
            {
            	char a[15];
                printf("enter your name to display it in capital \n");
                scanf("%s",&a);
                printf("%s \n",strupr(a));
                t=0;
                break;
            }
            case 2:
            {
                char w[15];
                printf("enter the name to display it in smaller \n");
                scanf("%s",&w);
                printf("%s \n",strlwr(w));
                t=0;
                break;
            }
            case 3:
            {
                char q[15];
                int j=1,d;
                printf("enter the name to print it multiple time \n");
                scanf("%s",&q);
                printf("\nhow many times do you want to print you name: ");
                scanf("%d",&d);
                while(j <= d)
                {
                    printf("%s \n",q);
                    j++;
                }
                t=0;
                break;
            }
            default:
            {
                printf("please enter the valid choice \n");
                printf("do you want to repeact the program:\n '1'=yes, '0'=no \n");
        		scanf("%d",&t);
            }
        }
        if(t == 0)
        {
        	break;
		}
    }
    while(t == 1);    
}
