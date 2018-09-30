#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int R, B;
	printf("Enter R: ");
	scanf("%d",&R);
	printf("Enter B: ");
	scanf("%d",&B);
	if (sqrt(pow(R,2)/8)<B) printf("False");
		else  printf("True");
			
	return 0;
}
