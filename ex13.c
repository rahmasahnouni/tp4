#include<stdio.h>
#include<stdlib.h>

int verif(int x,int t[45],int n)
{int ok,i;
ok=0;
for (i=0;i<n;i++)
{
if (x==t[i])
ok=1;
}

return ok;
}

void main()
{int t[45];
int n,i,s,p,d,j,f;

do{
printf("Donner n = ");
scanf("%d",&n);
}while(n<5 || n>50);

for (i=0;i<n;i++)
{
printf("T[%d]= ",i);
scanf("%d",&t[i]);
}
printf("\n");
for (i=0;i<n;i++)
   {
       printf("%d\t",t[i]);
   }

   do{
printf("\nDonner S = ");
scanf("%d",&s);
}while(verif(s,t,n)==0);

   do{
printf("\nDonner P = ");
scanf("%d",&p);
}while(verif(p,t,n)==0);

d=0;
j=0;
do
{
do{
    if(t[j]==p)
        d=j;
    else
        j=j+1;
}while(t[j]!=p);
d=j+1;
do{
printf("%d\t",t[d]);
d=d+1;
  }while(t[d]!=s);
printf("\n");
j=d;
}while(j<n);
}
