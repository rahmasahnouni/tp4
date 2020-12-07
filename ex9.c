#include<stdio.h>
void main()
{char t[30];
int n,i,ok,s;

do{
printf("Donner n = ");
scanf("%d",&n);
}while(n<1 || n>30);

for (i=0;i<n;i++)
{
printf("T[%d]= ",i);
scanf(" %c",&t[i]);
}

for (i=0;i<n;i++)
   {
       printf("%c\t",t[i]);
   }

i=0;
ok=1;
do{
if (isdigit(t[i])==0)
ok=0;
else
i=i+1;
}while(((ok==1)&&(i<n)));

if(ok==1)
printf("\nLe tableau est valide");
else
printf("\nLe tableau est invalide");
s=0;

if (ok==1)
{
    for (i=0;i<n;i++)
    s=s+(t[i]-48);
}
printf("\nLa somme des chiffres = %d",s);
}
