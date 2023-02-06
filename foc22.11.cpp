#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e;
	printf("enter the number :");
	scanf("%d",&a);
	e=a;
	while(a>0)
    {
		b=a%10;
		c=b*b*b;
		a=a/10;
		d=c+d;
	}
	if(e==d)
	printf("%d is an armstrong number.",e);
	else
	printf("%d is not an armstrong number.",e);
getch();
}
enter the number :153
153 is an armstrong number.
enter the number :123
123 is not an armstrong number.
