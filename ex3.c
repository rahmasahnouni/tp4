#include <stdio.h>

void main ()
{ int tableau[10],n,i,np,nt  ; int tp[10] , tn[10] ;
   do
   {
      printf("donner le nombre de case du tableau\n");
      scanf("%d",&n);
   }while((n<0)||(n>10));
for (i=0 ; i<n ; i++)
{
  scanf("%d",&tableau[i]);
}
 np=0; nt=0;
   for (i=0; i<n ; i++)
   {
     if (tableau[i]<=0)
     {
       nt++ ;
       tn[nt]=tableau[i];
     }
     else
     {
       np++ ;
       tp[np]=tableau[i];
     }
   }

   for (i=0; i<np ; i++)
   {
      printf("%d\t",tp[i]);
   }
   printf("\n");
    for (i=0 ; i<nt ; i++)
   {
      printf("%d\t",tn[i]);
   }
}
