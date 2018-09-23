#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float x,y;
	printf("Vvedite x: ");
	scanf("%f",&x);
	y=16*x*x;
	printf("Rezultat: %f",y);
	return 0;
}
