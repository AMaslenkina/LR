#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
    int number;
    int  i;
    int first, second, third;
 
    for (i=11; i*i<1000; ++i) {
       		number = i * i;
            first = number / 100;
            second = (number - first*100) / 10;
            third = number % 10;
            if (first<second && second<third)
                printf("number = %i\n",number);
       
    }
    return 0;
}
	
