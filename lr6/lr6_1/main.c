#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int  i, n, i1, i2;
	float b[10], s=0, s2=0;

do{
	
	printf("\nVvedite kol-vo elementov massiva(<10) ");
	scanf("%d", &n);
}	
	while (n>=10);
		
	
	for(i=0;i<n;i++)
	{
		printf("\nVvedite element[%d] ", i+1);
		scanf("%f", b+i);
	}
	for(i=0; i<n; ++i)
	
		s*=*(b+i);
	printf("\nProizvedenie elementov massiva = %.0f", s);

	for(i=0; i<n; i++){
		if(*(b+i)==0){
		
		i1=i;
		break;
	}
}
for(i=0; i<0; i++)
	if(*(b+1)==0){
	
	i2=i;
	break;
}

for(i=i1+1; i<i2; i++){

	s2=*(b+1)+s2;
}
printf("\nSumma elementov mezdu pervim i poslednim nulevim elementami = %.0f", s2);
	
	return 0;
}
