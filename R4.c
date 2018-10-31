#include<stdio.h>
int main()
{
 int num;
 printf("Enter anu number");
 scanf("%d", &num);
 if(num % 3 == 0 || num % 5 == 0)
 {
  printf("Number is a multiple of 3 or 5" + num);
 }
 else
 {
 printf("-1");
 }
 }
