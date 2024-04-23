#include <stdio.h>

int main()
{
    int std,rollno;
    //standard classifier
    printf("enter your standard: \n");
    scanf("%d",&std);
    if(std<=6) //separates below standard 6
    {
        std = 6;
    }
    
    if(std>6) //separates above standard 6
    {
        std = 12;
    }
    
    
    //roll number classifier
    
    printf("\nenter your roll number: ");
    scanf("%d",&rollno);
    
    if(rollno<=15) //seperates below roll number 15
    {
        rollno = 15;
    }
    
    else if(rollno>15 && rollno<=30) //seperates above roll number 15
    {
        rollno = 30;
    }
    
    
    switch(std)
    {
        case 6:
        {
            switch(rollno)
            {
              case 15:
                {
                    printf("goto junior block 1st room");
                    break;
                }
              case 30:
                {
                    printf("\ngoto junior block 2nd room\n");
                    break;
                }
            }
            break;
        }
        case 12:
        {
            switch(rollno)
            {
                case 15:
                {
                    printf("\ngoto senior block 1st room\n");
                    break;
                }
                case 30:
                {
                    printf("\ngoto senior block 2nd room\n");
                    break;
                }
            }
            break;
        }
    }
}

