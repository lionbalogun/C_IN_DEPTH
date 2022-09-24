#include <stdio.h>
#define MSSG "Hello World\n"
int main(int argc, char const *argv[])
{
    printf(MSSG);


    printf("Indian\b is great\n");
    printf("New\rDelhi\n");

   /* int a=11;
    printf("a = %d\t", a);
    printf("a = %o\t", a);
    printf("a = %x\n", a);
    */

   /* int a = 50000;
    unsigned int b = 50000;
    printf("a =%d, b = %u\n", a,b);
    */
/*
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);
    printf("%d\n", ch);
*/

 /*
    float b = 123.1265;
    printf("%f\t",b);
    printf("%.2f\t",b);
    printf("%.3f\n");
*/

  /*
    int a =625, b=2394, c=12345;
    printf("%5d, %5d, %5d\n", a,b,c);
    printf ("%3d, %4d, %5d\n",a,b,c);
*/

/*
    int a=98;
    char ch='c';
    printf("%c, %d\n",a,ch);
*/

float a1,b1,a2,b2,a3,b3;
a1=2;
b1=6.8;
a2=4.2;
b2=3.57;
a3=9.82;
b3=85.673;
printf("%3.lf, %4.2f\n", a1,b1);
printf("%5.lf, %6.2f\n", a2,b2);
printf("%7.lf, %8.2f\n", a3,b3);


printf("%10s\n", "India");
printf("%4s\n", "India");
printf("%.2s\n", "India");
printf("%5.2s\n", "India");
}


