#include <stdio.h>
//declaring global variable
int glob = 7;
//declaring function 
void loc();

int main()
{
    printf("the global variable glob = %d",glob);//prints the vale of global variable
    int local = 77;//declaring the local variable
    printf("the local variable local = %d ",local);//prints the value of local cariable
    
    loc();
}
loc()
{
    printf("the local variable local = %d ",local);//error will occur when print becuz the local variable is declared in another sub function
}