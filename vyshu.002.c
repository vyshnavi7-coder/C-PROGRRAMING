//program to read price of i phone&covercase and calculate total bill.

#include<stdio.h>
main()
{
  int p1,p2,billamt;

  printf("Enter the price of i phone: ");
  scanf("%d",&p1);

  printf("enter the price of covercase: ");
  scanf("%d",&p2);

  billamt=p1+p2;

  printf("the bill amt is %d",billamt);

  printf("\n");



}
