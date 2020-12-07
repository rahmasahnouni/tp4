#include<stdio.h>
void main()
{int t[30];
int n,i,x,ok,p;

do{
printf("Donner n = ");
scanf("%d",&n);
}while(n<0 || n>30);

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
   i=0;
   ok=0;
   do
   {
   if(x==t[i])
   {
   p=i;
   ok=1;
   }
   else
    i=i+1;
   }while(i<n && ok==0);
   if (ok==1)
   printf("\nla position de %d dans T = %d",x,p);
   else
   printf("X n'existe pas dans T");
}
