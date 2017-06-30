#include<stdio.h>
#include<string.h>
int main()

{
float fahr, celsius;
int lower, upper, step;


lower = 0;
upper = 300;
step = 20;
 char j[20];
 char i[20];
fahr = lower;
 strcpy(j, "Temp_in celcius");
 strcpy(i, "temp_in_Fahr");
printf ("%3s %6s\n", i, j);
while (fahr <= upper)
{
celsius = (5.0/9.0) * (fahr - 32.0);
printf ("%3.0f \t\t %6.1f\n", fahr, celsius);

fahr = fahr + step;


}

}
