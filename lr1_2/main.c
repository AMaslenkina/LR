#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) { 

float x,y,z,s,a,b,q,e;
//x = - 4.5;
//y = 0.75e-4;
//z =- 0.845e2;
e = 2.71828;

printf("Vvedite x = ");
scanf("%f", &x);
printf("Vvedite y = ");
scanf("%f", &y);
printf("Vvedite z = ");
scanf("%f", &z);

a=cbrt(9+pow(x-y,2));
b=x*x+y*y+2;
q=tan(z)*tan(z)*tan(z)*pow(e,fabs(x-y));
s=a/b-q;
printf("Rezultat s = %f",s);
	return 0;
}
