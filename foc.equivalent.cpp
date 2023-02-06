#include<stdio.h>
#include<conio.h>
int main()
{
	int bnum,digit,decimal=0,bin,base=0;
	printf("Enter the binary number:");
	scanf("%d",&bnum);
	bin=bnum;
	while(bnum!=0)
	{
		digit=bnum%10;
		decimal=decimal+(digit<<base);
		base=base+1;
		bnum=bnum/10;
	}
	printf("The binary equivalent of %d in secimal = %d",bin,decimal);
	
	getch();
}

Enter the binary number:1111
The binary equivalent of 1111 in secimal = 15

