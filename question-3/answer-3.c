#include <stdio.h>
#include <stdlib.h>
int main() 
{
	 FILE *even_file = fopen("leap_year.txt", "w");
     FILE *odd_file = fopen("years.txt", "w");

     int i,n;
        
    for (i = 1; i < n; i++)
	{ 
	   if (i%4==0 || i%100==0 || i%400==0)
	   {
           printf("leap_year.txt", "%d\n", i);
       }
   }




  fclose(even_file);
  fclose(odd_file);
}
