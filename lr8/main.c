#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "windows.h"
 
struct sotrudnik 
{ 
char fio[20];
char doljnost[20];
int data; 
int zarpl;
}; 
 
struct sotrudnik sotrudniks[20]; 
struct sotrudnik buffer; 

int i,j,n,menu,k,x,data1,zarpl1,z=0,y,r, s;
	char fio1[20],doljnost1[20];


int main() {

printf("Vvedite kol-vo sotrudnikov: "); 
	scanf("%d",&n); 
		for(i=0;i<n;i++) {
		 
	printf("Sotrudnik ¹%d\n", i+1); 

	puts("Vvedite F.I.O.: "); 
	fflush(stdin); 
	gets(sotrudniks[i].fio); 

	puts("Vvedite datu rojdeniya: "); 
	scanf("%d", &sotrudniks[i].data); 

	puts("Vvedite nazvanie doljnosti: "); 
	fflush(stdin); 
	gets(sotrudniks[i].doljnost); 

	puts("Vvedite zarplatu: "); 
	scanf("%d", &sotrudniks[i].zarpl); 
  } 	printf("\n\n");

while(1)
	{
	 printf("\nOperaciia: "); 
	 printf("\nSortirovka-1 ");
	 printf("\nPoisk-2 ");
	 printf("\nIzmenenie-3 ");
	 printf("\nUdalenie-4 ");
	 printf("\nSpisok-5 ");
	 printf("\nVihod-6 \n");
	 scanf("%d",&menu);
	 switch(menu)
	{
		case 1:
		{ 	
		printf("\nKriterii sort:\n");
			printf("1-F.I.O.\n");
			printf("2-Doljnost'\n");
			printf("3-Zarplata\n");
			printf("4-Data rojdeniya\n");
			printf("0-Vihod iz kriteria\n");
			printf("Vibor kriteria ");
			scanf("%d",&x);
	
			switch(x){
				case 0:break;
				case 1:{
					for (i=0; i<n-1; i++)
			 			for (j=i+1; j<n; j++)    
			   				if(strcmp(sotrudniks[i].fio,sotrudniks[j].fio)>0){  
							    buffer=sotrudniks[i]; 
							    sotrudniks[i]=sotrudniks[j]; 
							    sotrudniks[j]=buffer; 
			   } 
			   
			   for(i=0;i<n;i++)
			   {
				printf("\n\n");
				printf("Sotrudnik ¹%d\n",i+1);
				printf("F.I.O.: %s ",sotrudniks[i].fio);
				printf("Doljnost': %s ",sotrudniks[i].doljnost);
				printf("Data rojdeniya: %d ",sotrudniks[i].data);
				printf("Zarplata: %d ",sotrudniks[i].zarpl);
			   }
			break;
			}
			case 2:{
				for (i=0; i<n-1; i++)
			 			for (j=i+1; j<n; j++)    
			   				if (strcmp(sotrudniks[i].doljnost,sotrudniks[j].doljnost)>0){  
							    buffer=sotrudniks[i]; 
							    sotrudniks[i]=sotrudniks[j]; 
							    sotrudniks[j]=buffer; 
			   } 
			   
			   for(i=0;i<n;i++)
			   {
			printf("\n\n");
				printf("Sotrudnik ¹%d\n",i+1);
				printf("F.I.O.: %s ",sotrudniks[i].fio);
				printf("Doljnost': %s ",sotrudniks[i].doljnost);
				printf("Data rojdeniya: %d ",sotrudniks[i].data);
				printf("Zarplata: %d ",sotrudniks[i].zarpl);
			   }
			break;
			}
			case 3:{
					for (i=0; i<n-1; i++)
			 			for (j=i+1; j<n; j++)    
			   				if (sotrudniks[i].data>sotrudniks[j].data){  
							    buffer=sotrudniks[i]; 
							    sotrudniks[i]=sotrudniks[j]; 
							    sotrudniks[j]=buffer; 
			   } 
			   
			   for(i=0;i<n;i++)
			   {
			printf("\n\n");
				printf("Sotrudnik ¹%d\n",i+1);
				printf("F.I.O.: %s ",sotrudniks[i].fio);
				printf("Doljnost': %s ",sotrudniks[i].doljnost);
				printf("Data rojdeniya: %d ",sotrudniks[i].data);
				printf("Zarplata: %d ",sotrudniks[i].zarpl);
			   }
			break;
			}
			case 4:{
					for (i=0; i<n-1; i++)
			 			for (j=i+1; j<n; j++)    
			   				if (sotrudniks[i].zarpl>sotrudniks[j].zarpl){  
							    buffer=sotrudniks[i]; 
							    sotrudniks[i]=sotrudniks[j]; 
							    sotrudniks[j]=buffer; 
			   } 
			   
			   for(i=0;i<n;i++)
			   {
			printf("\n\n");
				printf("Sotrudnik ¹%d\n",i+1);
				printf("F.I.O.: %s ",sotrudniks[i].fio);
				printf("Doljnost': %s ",sotrudniks[i].doljnost);
				printf("Data rojdeniya: %d ",sotrudniks[i].data);
				printf("Zarplata: %d ",sotrudniks[i].zarpl);
			   }
			break;
			}
			
	    	} 
		break;
	   }
case 2:
		{
			while(1)
			{
				printf("\nKriterii sort:\n");
			printf("1-F.I.O.\n");
			printf("2-Doljnost'\n");
			printf("3-Zarplata\n");
			printf("4-Data rojdeniya\n");
			printf("0-Vihod iz kriteria\n");
			printf("Vibor kriteria ");
			scanf("%d",&x);
			switch(x)
			{
				case 0:break;
				case 1:
				{
					z=0;
					printf("Vvedite F.I.O.: ");
					fflush(stdin);
					gets(fio1);
					for(i=0;i<n;i++)
					{
						if(strcmp(fio1,sotrudniks[i].fio)==0)
						{
				printf("Sotrudnik ¹%d\n",i+1);
				printf("F.I.O.: %s ",sotrudniks[i].fio);
				printf("Doljnost': %s ",sotrudniks[i].doljnost);
				printf("Data rojdeniya: %d ",sotrudniks[i].data);
				printf("Zarplata: %d ",sotrudniks[i].zarpl);
				            z++;
						}						
					}
					if(z==0)
					printf("Ne naideno\n");
					break;
				}
				case 2:
				{
					 z=0;
                     printf("Doljnost': ");
					 fflush(stdin);
					 gets(doljnost1);
					 for(i=0;i<n;i++)
					 {
						if(strcmp(doljnost1,sotrudniks[i].doljnost)==0)
						{
				printf("Sotrudnik ¹%d\n",i+1);
				printf("F.I.O.: %s ",sotrudniks[i].fio);
				printf("Doljnost': %s ",sotrudniks[i].doljnost);
				printf("Data rojdeniya: %d ",sotrudniks[i].data);
				printf("Zarplata: %d ",sotrudniks[i].zarpl);
				            z++;
						}						
					}
					if(z==0)
					printf("Ne naiden\n");					
					break;
				}
				case 3:
				{
					z=0;
					printf("Data rojdeniya: ");
					fflush(stdin);
					scanf("%d",&data1);
					for(i=0;i<n;i++)
					{
						if(data1==sotrudniks[i].data)
						{
				printf("Sotrudnik ¹%d\n",i+1);
				printf("F.I.O.: %s ",sotrudniks[i].fio);
				printf("Doljnost': %s ",sotrudniks[i].doljnost);
				printf("Data rojdeniya: %d ",sotrudniks[i].data);
				printf("Zarplata: %d ",sotrudniks[i].zarpl);
				            z++;
						}						
					}
					if(z==0)
					printf("Ne naiden\n");
					break;
				}
				case 4:
				{
					 z=0;
					 printf("Zarplata: ");
					 fflush(stdin);
					 scanf("%d",&zarpl1);
				 	 for(i=0;i<n;i++)
					{
						if(zarpl1==sotrudniks[i].zarpl)
						{
				printf("Sotrudnik ¹%d\n",i+1);
				printf("F.I.O.: %s ",sotrudniks[i].fio);
				printf("Doljnost': %s ",sotrudniks[i].doljnost);
				printf("Data rojdeniya: %d ",sotrudniks[i].data);
				printf("Zarplata: %d ",sotrudniks[i].zarpl);
				            z++;
						}						
					}
					if(z==0)
					printf("Ne naiden\n");
					break;
				}
              
			}
		    if(x==0)
		    break;
			continue;
		    }
			break;
		}
case 3:
		{
			while(1)
			{
			  printf("\nVvedite ¹ sotrudnika kogo nado izmenit' ");
		scanf("%d",&r);
			  printf("\nVvedite kriterii \n1-F.I.O. \n2-Doljnost' \n3-Data rojdeniya \n4-Zarplata  \n0-Vihod \n");
			  scanf("%d",&y);
		  	  switch(y)
			{
				case 0:break;
				case 1:{
					printf("Novaya F.I.O.: ");
					fflush(stdin);
					gets(fio1);
					strcpy(sotrudniks[r-1].fio,fio1);
					break;
				}
				case 2:
				{
					printf("Novaya doljnost': ");
					fflush(stdin);
					gets(doljnost1);
					strcpy(sotrudniks[r-1].doljnost,doljnost1);
					break;
				}
				case 3:
				{
					printf("Novaya data rojdeniya: ");
					scanf("%d",&data1);
				sotrudniks[r-1].data=data1;
					break;
				}
				case 4:
				{
					printf("Novaya zarplata: ");
				scanf("%d",&zarpl1);
				sotrudniks[r-1].zarpl=zarpl1;
					break;
				}
				
			}
			if(y==0)
		    break;
			continue;
		    }
			break;
		}
case 4:
		{
			printf("Vvedite ¹ sotrudnika kogo nado udalit' ");
			scanf("%d",&s);
			s--;
				printf("\n\n");
				printf("Sotrudnik ¹%d\n",i+1);
				printf("F.I.O.: %s ",sotrudniks[i].fio);
				printf("Doljnost': %s ",sotrudniks[i].doljnost);
				printf("Data rojdeniya: %d ",sotrudniks[i].data);
				printf("Zarplata: %d ",sotrudniks[i].zarpl);
			
				for(s;s<=n;s++)
			{
				strcpy(sotrudniks[s].fio, sotrudniks[s+1].fio);
				strcpy(sotrudniks[s].doljnost, sotrudniks[s+1].doljnost);
				sotrudniks[s].data = sotrudniks[s+1].data;
				sotrudniks[s].zarpl = sotrudniks[s+1].zarpl;
			}
			n--;
			break;
		}
		case 5:
		{
			for(i=0;i<n;i++)
			{
				printf("\n\n");
				printf("F.I.O.: %s ",sotrudniks[i].fio);
				printf("Doljnost': %s ",sotrudniks[i].doljnost);
				printf("Data rojdeniya: %d ",sotrudniks[i].data);
				printf("Zarplata: %d ",sotrudniks[i].zarpl);
			}
			break;
	    }
  case 6:exit(1);
	}
	continue;
}
	return 0;
}

