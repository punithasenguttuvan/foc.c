#include<stdio.h>
#include<conio.h>
int rev(int number);
int main()
{
	int p,q;
	printf("enter the number:");
	scanf("%d",&p);
	q=rev(p);
	printf("reverse of %d is %d \n",p,q);
	getch();
}
int rev(int n)
{
	int digit,rev_of=0;
	while(n!=0)
	{
		digit=n% 10;
		rev_of=rev_of*10+digit;
		n=n/10;
	}
	return(rev_of);
}

output

enter the number:1234
reverse of 1234 is 4321
