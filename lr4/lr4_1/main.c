#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int a[5]; 
int i;

for(i=0; i<5; i++) {
printf("a[%d] = ", i);
scanf("%d", &a[i]); 
}

for(a[i];i>=0;i--) {
printf("%d ",a[i]); 
}
return 0;
}
