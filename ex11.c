#include<stdio.h>
void main()
{int t[50];
int n,i,x,pos,aux;

do{
printf("Donner n = ");
scanf("%d",&n);
}while(n<0 || n>50);

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

   printf("\nDonner X = ");
scanf("%d",&x);

 printf("\nDonner la position = ");
scanf("%d",&pos);

for (i=pos;i<=n;i++)
{
aux=t[i];
t[i]=x;
x=aux;

}

for (i=0;i<=n;i++)
   {
       printf("%d\t",t[i]);
   }
}
