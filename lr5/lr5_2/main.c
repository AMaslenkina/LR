#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

int main( void ) {

int i, j, val,m[2][3];
int min_h[2], max_w[3];

for(i=0; i<2; i++)
	for(j=0; j<3; j++){
		
		printf("\nVvedite element [%d,%d]  ", i+1, j+1);
		scanf("%d", &m[i][j]);
		
	}

for ( i= 0; i<2; i++ ) {
val= m[i][0];
for ( j= 0; j<3; j++ ) {
if ( m[i][j]<val ) 
 val= m[i][j];
  
}
min_h[i]= val;
}

for ( j= 0; j<3; j++ ) {
val= m[0][j];
for ( i= 1; i<2; i++ ) {
if ( m[i][j]>val ) 
 val= m[i][j];
 
}
max_w[j]= val;
}

for ( i= 1; i<2; i++ ) {
	for ( j= 1; j<3; j++ ) {
		if ( m[i][j] == max_w[j] && m[i][j] == min_h[i] ) 
printf( "\nIndeks sedlovoy tochki [%d][%d]\n", i, j );

}
}
getch();

return 0;


}
