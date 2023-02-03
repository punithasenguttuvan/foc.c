#include<stdio.h>
int main()
{
	int n,m,i;
	printf("Enter n and m value:");
	scanf("%d %d",&n,&m);
	for(i=1;i<=m;i++)
	{
		printf("%d X %d=%d\n",i,n,i*n);
	}
return 0;
}


output
Enter n and m value:5
3
1 X 5=5
2 X 5=10
3 X 5=15
