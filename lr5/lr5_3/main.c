#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    int i, j, nom_str, *a, k=0;
      if(!(a=(int*)calloc(12,sizeof(int))))                    
    { puts("Not enough memory");                           
                      getch(); return;       }  

for (i=0; i<3; i++)
        for (j=0; j<4; j++)
        {
            printf("Vvedite element [%d,%d] \n", i+1, j+1);
            scanf("%d", a+i*4+j);
        }
 
for (i=0; i<3; i++)
{
        for (j=0; j<4; j++)
        {
            printf("%d ", *(a+i*4+j));
        }
            printf("\n");
 
}
 
    
    for (i=0;i<3;i++)
        {for (j=0;j<4;j++)
    {
        if(*(a+i*4+j)<0)
        {
            if(j==0) k=1; 
            else k++;
            if(k==4) {nom_str=i; printf("nomer stroki s otricatelnimi elementami %d\n", nom_str+1);break;}}
        
    }}
int t=0;
t=*(a+nom_str*4+0);
    for (i=0; i<3; i++)
{
        for (j=0; j<4; j++)
            *(a+i*4+j)*=t;}
    for (i=0; i<3; i++)
{
        for (j=0; j<4; j++)
        {
            printf("%d ", *(a+i*4+j));
        }
            printf("\n");
    }
    free(a);
    getch();
}
