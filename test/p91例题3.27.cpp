#include<stdio.h>
int main()
{
	long sum=0;
	int x;
	for(;;)
	{
		scanf("%d",&x);
		if(x>=0)sum+=x;
		else break;
	}
	printf("sum=%101d",sum);
	return 0;
  }  
