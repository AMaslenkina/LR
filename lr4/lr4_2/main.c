#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    int N;
    printf("Input N: ");
    scanf("%d", &N);
    int mas[N], i, j, count=0;
    for(i=0; i<N; i++) scanf("%d", &mas[i]);
    for(i=0; i<N-1; i++)
    {
        for(j=i+1; j<N; j++) scanf("%d", &mas[j]);
        {
            if(mas[i]>mas[j]) count+=1;
        }
    }
    printf("Inver = %d", count);
}

