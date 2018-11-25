#include<stdio.h> 
#include<conio.h> 
#include<string.h>
#include <windows.h>
char vivod();
char add();
char poisk(char *n);
struct sotrudnik
{ char fam[30]; 
  char name[20];  
  char ot[30];
  char zarpl[20];
  char doljnost[30];
  char rojd[4];
} ;
struct sotrudnik inf[30];
int records;
int i,k,k1;
char n[20];
int main(){
FILE *f;
        if(!(f = fopen("sotrudniks.dat", "w+b"))) {
             printf("Fail nevozmojno otkrit\n");
             return 0;
       }
 records=0;
do
{
add();
puts("Dobavit escho? (1/0)");
scanf("%d", &i);
} 
while(i);
do {
printf("1-Vivod\n2-Dobavit\n3-Poisk\n4-Vihod\n");
scanf("%d",&k);
switch(k){
	case 1:
		vivod();
		break;
	case 2:
		add();
		break;
	case 3:
		printf("Vvedite familiu\n");
		scanf("%s",&n);
		poisk(n);
	case 4:
		break;
}
printf("Prodolshit' ili viiti? (1/0)\n");
scanf("%d",&k1);}
while(k1);
}

char vivod(){
	FILE *f;
	int i;
    printf("\Spisok:\n");
if(!(f=fopen("sotrudniks.dat","r")))
{ printf("Oshibka otkritia faila\n"); return 0;}
for(i=0;i<records;i++)
{ puts(inf[i].fam);
  puts(inf[i].name);
  puts(inf[i].ot);
  puts(inf[i].zarpl);
  puts(inf[i].doljnost);
  puts(inf[i].rojd);
printf("\n\n");
}
fclose(f);
}

char add(){
    FILE *f;
	int i;
	if(!(f = fopen("sotrudniks.dat", "a+"))) {
             printf("Nevozmojno sozdat fail\n");
             return 0;
       }
{   printf("Sotrudnik ¹%d\n",records+1);
	puts("Vvedite familiu");
	fflush(stdin);
	gets(inf[records].fam);
	fputs(inf[records].fam,f);
	fputs ("\n", f);
	puts("Vvedite imia");
	fflush(stdin);
	gets(inf[records].name);
	fputs(inf[records].name,f);
	fputs ("\n", f);
	puts("Vvedite otchestvo");
	fflush(stdin);
	gets(inf[records].ot);
	fputs(inf[records].ot,f);
	fputs ("\n", f);
	puts("Vvedite zarplaty");
	fflush(stdin);
	gets(inf[records].zarpl);
	fputs(inf[records].zarpl,f);
	fputs ("\n", f);
    puts("Vvedite doljnost'");
	fflush(stdin);
	gets(inf[records].doljnost);
	fputs(inf[records].doljnost,f);
	fputs ("\n", f);
	puts("Vvedite god rojdeniya");
	fflush(stdin);
	gets(inf[records].rojd);
	fputs(inf[records].rojd,f);
	fputs ("\n\n", f);
	records++;
}
fclose(f);
}
char poisk(char *n){
	FILE *f;
	if(!(f = fopen("sotrudniks.dat", "r"))) {
    printf("Nevozmojno sozdat' fail\n");
    return 0;
}

for(i=0; i<records;i++)
{
    if (!strcmp(inf[i].fam,n))
		{
        printf("\n\nFamilia: %s \n",inf[i].fam);
        printf("Imia: %s \n",inf[i].name);
        printf ("Otchestvo: %s \n",inf[i].ot);
        printf("Zarplata: %s \n",inf[i].zarpl);
        printf("Doljnost': %s \n",inf[i].doljnost);
        printf ("God rojdeniya: %s \n",inf[i].rojd);
                }
}
fclose(f);
fflush(stdin);
return 0;
}

