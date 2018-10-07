#include <stdio.h> 
int main () 
{ 
float i=10000;
int let=0; 

while (i<=20000)
{ 
i=i+(i*0.03); 
let++; 
} 
printf("Rez: %d goda",let); 
return 0;
}
