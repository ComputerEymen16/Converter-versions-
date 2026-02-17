#include<stdio.h>

int main()
{
printf("Press Enter to begin...");
getchar();

 /*defining variables*/
 float centimeter, meter, kilometer;

 /*length in centemeters*/
 printf("Write the length in centimeters: ");
 scanf("%f",&centimeter);

 /*perform translation operations*/
 meter = centimeter/100.0;
 kilometer = centimeter/100000.0;


 printf("Length in meters =%2f m\n",meter);
 printf("Length in meters =%5f km\n",kilometer);

 getchar();//to prevent the terminal from closing
 getchar();



return 0;



}
