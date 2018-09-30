#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float a, b, c, i;
	
	printf("Enter a: ");
		scanf("%d", &a);
	printf("Enter b: ");
		scanf("%d", &b);
	printf("Enter c: ");
		scanf("%d", &c);
i = 0;
if(a>0)i++;
if(b>0)i++;
if(c>0 )i++;
		printf("Rez: %f", i);
	return 0;
}
