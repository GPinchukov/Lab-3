#include <stdio.h> 
#include <math.h> 
void main()
{
  float c1, c2; 
  int i=1;
  printf("enter c1 and c2: ");
  scanf("%f%f", &c1, &c2);
  while(i<=6)
   {
   c1 /= 2;
   c2 += c1;
   c2 /= 2;
   c1 += c2;
   i++;
   }
 printf("novii ob'iomi \n %f\n%f",c1, c2);
 }
