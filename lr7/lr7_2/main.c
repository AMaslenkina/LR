#include  <stdio.h>
#include <locale.h>
#include <string.h>
 
int main(int argc, char *argv[]) {
    char str[50] = "";
    char res[50] = "";
    
    printf("Vvedite stroku: ");
    fgets (str, 50, stdin);

    int j = 0;
    int i;
    for (i = 0; i<strlen(str) ; i++) {
        if (str[i] == ' ') 
        {
          if (j==0) continue;
          if (str[i+1] == ' ') continue;
        }
        res[j] = str[i];
        j++;
    }
    i=strlen(res);
    if(res[i-2] == ' ')
        res[i-2] = '\0';
 
    printf("\nRezultat: %s", res);
    getchar();
}
