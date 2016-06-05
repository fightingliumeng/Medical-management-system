#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

#define N 40

void main(void)
{
	int a,b,t;
	printf("please intput a,b\n");
	scanf("%d %d",&a,&b);
	t=a;
	a=b;
	b=t;
	
	printf("%d %d\n",a,b);
	
		
}
