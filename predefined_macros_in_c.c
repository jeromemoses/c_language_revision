#include <stdio.h>

int main()
{
    //predefined macros
    char filename[] = __FILE__;
    char date[] = __DATE__;
    char time[] = __TIME__;
    int line = __LINE__;
    int ansi = __STDC__;
    //prints the filename,date, time, line, ansi status;
    printf("File name is: %s\n", filename);
    printf("Date is: %s\n", date);
    printf("Now time is: %s\n", time);
    printf("Current line number: %d\n", line);
    printf("Compilation Success: %d\n", ansi);
}
