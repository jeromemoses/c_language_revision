#include <stdio.h>

int main()
{
    //variable to store the numer which chechs the input numer is divisible by it
    int divider;
    int val = 3;
    
    //asks user to enter the range of prime number wanted to be print
    int range;
    printf("enter the range of the prime number you wanted to print: ");
    scanf("%d",&range);
    
    //prints 2 at initial
    if (range > 1) 
    {
        printf("2 ");
    }
    
    //counts loops to the rgiven range
    for (int count = 2; count <= range;)
    {
        //check whether the count number is devisible by any lesser value from it
        for (divider = 2; divider <= val - 1; divider++)
        {
            if (val%divider == 0)//breaks the loop if the value is divisible by any lesser number of it
            break;
        }
        //prints the value (prime number) if the value is not divisible buy any lesser number and equal to the divider value
        if (divider == val) 
        {
            if(val<=range)
            {
                printf("%d, ", val);
            }
            count++; // increases the count value to check whether the net number is prime or not
        }
        val++; //increases the value to check whether it is divisible by any lesser value of it
    }
}

//PRIME NUMBER EXAMPLES
  /*2	3	5	7	11	13	17	19	23
29	31	37	41	43	47	53	59	61	67
71	73	79	83	89	97	101	103	107	109
113	127	131	137	139	149	151	157	163	167
173	179	181	191	193	197	199	211	223	227
229	233	239	241	251	257	263	269	271	277
281	283	293	307	311	313	317	331	337	347
349	353	359	367	373	379	383	389	397	401
409	419	421	431	433	439	443	449	457	461
463	467	479	487	491	499	503	509	521	523
541	547	557	563	569	571	577	587	593	599
601	607	613	617	619	631	641	643	647	653
659	661	673	677	683	691	701	709	719	727
733	739	743	751	757	761	769	773	787	797
809	811	821	823	827	829	839	853	857	859
863	877	881	883	887	907	911	919	929	937
941	947	953	967	971	977	983	991	997	*/


