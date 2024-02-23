#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float fahr, start, end, celcius, increment;


   printf("Enter the start value in Fahr:");
   scanf("%f", &start);
   printf("Enter the end value in Fahr:");
    scanf("%f", &end);
    printf("Enter the increment value:");
    scanf("%f", &increment);


    printf("table of conversion of fahrnheiht to Celcius\n");
    printf("\nfahrenheit\tcelcius\n");
     printf("------\n");


     for (fahr = start; fahr <= end; fahr += increment)
     {
         celcius = (fahr - 32) * 5 / 9;
         printf("%8.2f\t%8.28.2f\n", fahr, celcius);
     }
     return 0;


}
