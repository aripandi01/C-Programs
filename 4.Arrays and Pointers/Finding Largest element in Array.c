#include<stdio.h>

int main()
{
  int n,i;
  float arr[50],max = 0;

  printf("Enter the  number of array: ");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
      printf("Enter the number%d: ",i+1);
      scanf("%f",&arr[i]);
  }

  for(i=1;i<n;i++)
  {
      if(arr[i]>max)
      max = arr[i];
  }
  printf("Largest number is: %.2f",max);

  return 0;
}

