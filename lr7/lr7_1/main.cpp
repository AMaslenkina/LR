#include <stdio.h>
#include <stdlib.h>

void s(int array[], int n){ 
int i, j; 
for(i = 0, j = n - 1; i < j; --j, ++i){ 
 array[i*n+j]=array[i*n+j]*array[0*n+j] ;
} 
} 
int main(void){
	int i=0,j=0,n=0, min=0;
	printf("vvedite kolichestvo strok i stolbcov\n");
	scanf("%d",&n);
	int array[n][n];
	for (i=0;i<n;i++)
	for (j=0;j<n;j++){ 
	printf("Vvedite element [%d,%d]\n", i+1, j+1);
	scanf("%d",&array[i][j]);
}
printf("Matrix: \n"); 
printf("\n"); 
for (i=0;i<n;i++) 
{ 
for (j=0;j<n;j++) 
printf("%d ", array[i][j]); 
printf("\n"); 
} 

for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			if (array[i][j]<min) {
				s(array[i*n+j]); 
			} break;
		}break;
	}
	printf("\n"); 
	printf("new matrix:\n"); 
	for(i = 0; i < n; ++i){ 
	printf("\n"); 
	for(j = 0; j < n; ++j) 
	printf("%d ", array[i][j]); 
	} 
	return 0; 
}
