#include <stdio.h> 
int main () 
{ 
float r, m, let=0; 
printf("vvedite sumu, kotoruu nuzno polozit' v bank' \n"); 
scanf("%f",&r); 
printf("vvedite sumu, kotoruu nuzno poluchit' \n"); 
scanf("%f",&m); 
int null =0;
while (m-r>=null)
{ 
r=r+(r*0.04); 
let++; 
} 
printf("dlya poluchenia summi dolzno proiti %.2f goda(let) \n",let); 
return 0;
}
