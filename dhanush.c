#include<stdio.h>
int main()
{
	int num,temp,count=0,sum=0,digit;
	printf("enter a positive integer:");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		digit=num%10;
		sum+=digit;
		count++,
		num=num%10;
    }
    printf("total number of digits:%d\n",count);
    printf("sum of digits%d\n",sum);
    return 0;
}