#include<stdio.h>
int main()
{
int power,exponent;
long long result=1;
printf("enter base number:");
scanf("%d",base);
printf("enter exponent number:");
scanf("%d",exponent);
while(exponent!=0)
{
result*=base;
--exponent;
}
printf("Answer =%lld",result);
return 0;
}
