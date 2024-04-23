#include <stdio.h>

int main()
{
    //variables to store input number and number of digits in input number
    int in_num=0;
    int d_count=0;
    
    //asks user to enter the input number
    printf("enter the number to print it in alphabet: ");
    scanf("%d",&in_num);
    
  /*  //calculates the number of digits in input number
    int digits = in_num;
    while(digits != 0)
    {
        digits/=10;
        d_count++;
    }
    printf("%d",d_count);
    printf("first: %d\n",first_d);
    printf("second: %d\n",mid_d);
    printf("last: %d\n",last_d);
    */
    
    int last_d = in_num%10;

    in_num = in_num/10;
    int mid_d = in_num%10;
    
    in_num = in_num/10;
    int first_d = in_num%10;
    
    if(first_d!=0)
    {
        switch(first_d)
        {
            case 1:
            {
                if(mid_d==0&&last_d==0)
                {
                    printf("hundred");
                }
                else
                {
                    printf("one ");
                }
                break;
            }
            case 2:
            {
                if(mid_d==0&&last_d==0)
                {
                    printf("two hundred");
                }
                else
                {
                  printf("two ");  
                }
                break;
            }
            case 3:
            {
                if(mid_d==0&&last_d==0)
                {
                    printf("three hundred");
                }
                else
                {
                    printf("three ");
                }
                break;
            }
            case 4:
            {
                if(mid_d==0&&last_d==0)
                {
                    printf("four hundred");
                }
                else
                {
                    printf("four ");
                }
                break;
            }
            case 5:
            {
                if(mid_d==0&&last_d==0)
                {
                    printf("five hundred");
                }
                else
                {
                    printf("five ");
                }
                break;
            }
            case 6:
            {
                if(mid_d==0&&last_d==0)
                {
                    printf("six hundred");
                }
                else
                {
                    printf("six ");
                }
                break;
            }
            case 7:
            {
                if(mid_d==0&&last_d==0)
                {
                    printf("seven hundred");
                }
                else
                {
                    printf("seven ");
                }
                break;
            }
            case 8:
            {
                if(mid_d==0&&last_d==0)
                {
                    printf("eight hundred");
                }
                else
                {
                    printf("eight ");
                }
                break;
            }
            case 9:
            {
                if(mid_d==0&&last_d==0)
                {
                    printf("nine hundred");
                }
                else
                {
                    printf("nine ");
                }
                break;
            }
            case 0:
            {
                printf("zero ");
                break;
            }
        }
    }
   
    if(mid_d!=0)
    {
         switch(mid_d)
        {
            case 1:
            {
                if(first_d==0&&last_d==0)
                {
                    printf("ten ");
                }
                else if(first_d != 0)
                {
                    printf("one ");
                }
                break;
            }
            case 2:
            {
                if(first_d==0)
                {
                    printf("twenty ");
                }
                else
                {
                    printf("hundred and twenty ");
                }
                break;
            }
            case 3:
            {
                if(first_d==0)
                {
                    printf("thirty ");
                }
                else
                {
                    printf("hundred and thirty ");
                }
                break;
            }
            case 4:
            {
                if(first_d==0)
                {
                    printf("fourty ");
                }
                else
                {
                    printf("hundred and fourty ");
                }
                break;
            }
            case 5:
            {
                if(first_d==0)
                {
                    printf("fifty ");
                }
                else
                {
                     printf("hundred and fifty ");
                }
                break;
            }
            case 6:
            {
                if(first_d==0)
                {
                    printf("sixty ");
                }
                else
                {
                    printf("hundred and sixty ");
                }
                break;
            }
            case 7:
            {
                if(first_d==0)
                {
                    printf("seventy ");
                }
                else
                {
                    printf("hundred and seventy ");
                }
                break;
            }
            case 8:
            {
                if(first_d==0)
                {
                    printf("eighty ");
                }
                else
                {
                    printf("hundred and eighty ");
                }
                break;
            }
            case 9:
            {
                if(first_d==0)
                {
                    printf("ninty ");
                }
                else
                {
                    printf("hundred and ninety ");
                }
                break;
            }
        }
    }

//last digit comparer   
    if(last_d!=0)
    {
        switch(last_d)
        {
            case 1:
            {
                if(mid_d==1&&first_d==0)
                {
                    printf("leven ");
                }
                else
                {
                    printf("one ");  
                }
                break;
            }
            case 2:
            {
                if(mid_d==1&&first_d==0)
                {
                    printf("twelve ");
                }
                else
                {
                    printf("two ");
                }
                break;
            }
            case 3:
            {
                if(mid_d==1&&first_d==0)
                {
                    printf("thirteen ");
                }
                else
                {
                    printf("three ");
                }
                break;
            }
            case 4:
            {
                if(mid_d==1&&first_d==0)
                {
                    printf("fourteen ");
                }
                else
                {
                    printf("four ");
                }
                break;
            }
            case 5:
            {
                if(mid_d==1&&first_d==0)
                {
                    printf("fifteen ");
                }
                else
                {
                    printf("five ");
                }
                break;
            }
            case 6:
            {
                if(mid_d==1&&first_d==0)
                {
                    printf("sixteen ");
                }
                else
                {
                    printf("six ");   
                }
                break;
            }
            case 7:
            {
                if(mid_d==1&&first_d==0)
                {
                    printf("seventeen ");
                }
                else
                {
                    printf("seven ");
                }
                break;
            }
            case 8:
            {
                if(mid_d==1&&first_d==0)
                {
                    printf("eighteen ");
                }
                else
                {
                    printf("eight ");
                }
                break;
            }
            case 9:
            {
                if(mid_d==1&&first_d==0)
                {
                    printf("ninteen ");
                }
                else
                {
                    printf("nine ");
                }
                break;
            }
        }
    }
}