#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int main(int argc, char *argv[]) {
	int sum[3];
	int i,j, d, f, z, h;
	int a[3][3];	
		for(i=0; i<3; i++)
			for(j=0; j<3; j++){	
				printf("Vvedite element [%d,%d] = ", i+1, j+1);
				scanf("%d", &a[i][j]);	
		}
		printf("Matrica \n");
			for(i=0; i<3; i++){
				for(j=0; j<3; j++){
			printf("%d\t", a[i][j]);	
}
printf("\n");
}
	for(i=0; i<3; i++){		
			sum[i]=0;
		for(j=0; j<3; j++){
			if(a[i][j]<0 && a[i][j]%2==0)
		sum[i]+=a[i][j];
		 

}
}
for (i=0;i<3;i++){
		printf("Summa elementov %d-stroki matrici = %d\n", i+1, sum[i]);}
 while ((sum[0]>sum[1])||(sum[1]>sum[2])||(sum[0]>sum[2])){
 	for (h=0;h<2;h++) {
	 if(sum[h]>sum[h+1]){
	 f=0;
    f=sum[h];
    sum[h]=sum[h+1];
    sum[h+1]=f;
    for (i=h;i<h+1;i++) {
		for (j=0;j<3;j++) {
			z=0;
    		z=a[i][j];
    		a[i][j]=a[i+1][j];
   			 a[i+1][j]=z;
				}
			}
		}
	}
}
 for (i=0;i<3;i++) {
 	printf("\n");
        for (j=0;j<3;j++) {
			printf("%d\t",a[i][j]);
			}
		}
        	printf("\n");
        	
     
    getch(); getch();                         
}

