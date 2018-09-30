#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n;
printf("Enter month: ");
scanf("%d", &n);
if (n==1 || n==2 || n==12) printf("Winter");
else if (n>=3 && n<=5) printf("Spring");
else if (n>=6 && n<=8) printf("Summer");
else printf("Autumn");

	
	return 0;
}
