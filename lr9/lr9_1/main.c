#include <stdio.h>
#include <locale.h>

int main(){
	int i, j,a[20],n=20;
	FILE *f,*g;

if(!(f = fopen("f.txt","r"))){
 printf("can not open the file\n");
return 0;
 }
	for (i=0; i<20; i++) {
		fscanf(f,"%d",&a[i]);
	}
fclose(f);
		if(!(g = fopen("g.txt", "w+")))  {
	printf("can not create the file\n");
return 0;
}
 for (i = 0; i < 5; i++)
    {
            if (a[i] >0)
                fprintf(g, "%d ", a[i]);
 }
 fclose (g);
 	if(!(g = fopen("g.txt", "a+")))  {
	printf("can not create the file\n");
return 0;
}
  for (i = 0; i < 15; i++)
    {
            if (a[i] <0)
                fprintf(g, "%d ", a[i]);
 }
    
fclose (g);
return 0;
}
