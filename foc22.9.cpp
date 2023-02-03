#include<stdio.h>
#include<conio.h>
int main()
{
  int i,arr[20],j,no; 
  printf("Enter size of array: ");
  scanf("%d",&no);
  printf("Enter any %d elements in array: ",no);
  for(i=0;i<no;i++)
  {
   scanf("%d",&arr[i]);
  }
  printf("Duplicate elements are: ");
  for(i=0; i<no; i++)
    for(j=i+1;j<no;j++)
    {
    if(arr[i]==arr[j])
    {
    printf("%d\n",arr[i]);
    }
    }
getch();
}

output

Enter size of array: 3
Enter any 3 elements in array: 345
345
567
Duplicate elements are: 345
