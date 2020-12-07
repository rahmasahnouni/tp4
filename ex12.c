#include<stdio.h>
void main()
{int t[20];
int n,i,x,pos1,pos2,aux;

do{
printf("Donner n = ");
scanf("%d",&n);
}while(n<0 || n>20);

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

 printf("\nDonner les deux positions = ");
scanf("%d",&pos1);
scanf("%d",&pos2);
do
{
    for (i=pos1;i<=pos2;i++)
{
printf("%d",t[i]);
}
n=n-1;
}while(t[i]=pos1||t[i]=pos2);
}
