#include<stdio.h>

int main()
{
    //declaring and checking the scope of auto variables storage class
    
	auto int jd =1;
	{
		auto int jd = 2;
		{
			auto int jd = 3;
			printf("i am in third internal function statement here the given variable value is %d \n",jd);
		}
		printf("i am in second internal function statement here the given variable value is %d \n",jd);
	}
	printf("i am in first internal function statement here the given variable value is %d \n",jd);
}