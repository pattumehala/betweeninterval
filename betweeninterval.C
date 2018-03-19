#include<stdio.h>
int main()
{
int n, low,high;
printf("\nEnter the number:");
scanf("%d",&n);
printf("\nEnter the two numbesr:");
scanf("%d%d",&low,&high);
if(n>=low && n<=high)
{
printf("\nYes");
}
else
{
printf("\nNo");
}
return 0;
}
