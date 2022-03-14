#include <stdio.h>
/*program to print the size of types
 * float variable floata
 * char variable chart
 * int variable inte
 * double variable doubla
 */
int main(void)
{
char charType;
int inteType;
float floatType;
double doubleType;
printf("size of char is:  %zu bytes\n", sizeof(charType));
printf("size of int is: %zu bytes\n", sizeof(inteType));
printf("size of float is: %zu bytes\n", sizeof(floatType));
printf("size of double is: %zu bytes\n", sizeof(doubleType));
return (0);


}
