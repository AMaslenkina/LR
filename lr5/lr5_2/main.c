#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define M 12
int main(void)
{
  int matr[N][M];
  int minr,maxc,i,j,y,x,f=0;
  srand(time(NULL));
  for(i=0;i<N;i++)
  	for(j=0;j<M;j++)
  		matr[i][j]=rand() %(200-(-200))+(-200);
  for(i=0;i<N;i++)
  {
      printf("\n");
      for(j=0;j<M;j++)
      printf("%d ",matr[i][j]);
  }
  printf("\n");
  for (i=0;i<N;i++) 
  {
     minr=matr[i][0];
     for (x=1;x<M;x++)
     {
        if ( matr[i][x]<minr )
        {
           minr=matr[i][x]; 
        }
     }
     for( j=0;j<M;j++)
     {
         if ( matr[i][j]==minr)
         {  
            maxc=matr[0][j];
            for (y=1;y<N;y++) 
            {
                if ( matr[y][j]>maxc ) 
                { 
                    maxc= matr[y][j];
                }
            }
                   if (matr[i][j]==maxc)
                   { 
                      printf( "matr[%d][%d]=%d\n", i, j, matr[i][j] ); 
                      f=1;
                   }
         }
     }
  }
if(!f)printf("Matrica ne imeet sedl. tochek!\n"); 
return (0);
}



