/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int m1 , m2 ;
  float tot = 0 ;
  float ave = 0 ;

  printf("Enter mark 1 - ");
  scanf("%d",&m1);
  printf("Enter mark 2 - ");
  scanf("%d",&m2);

  tot = m1 + m2 ;
  ave= tot / 2.0 ;
  printf("average = %.f\n",ave);


  return 0;
}

