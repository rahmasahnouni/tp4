#include <stdio.h>
void main()
{
    int tableau[20],i,n;
    do
   {
      printf("donner le nombre de case du tableau\n");
      scanf("%d",&n);
   }while((n<0)||(n>20));
for (i=0 ; i<n ; i++)
{
  scanf("%d",&tableau[i]);
}
for (i=0 ; i<n ; i++)
{
   if (tableau[i]=tableau[n-(i-1)])
   {
       printf("le tableau est symétrique");
   }
   else
    {
       printf("le tableau est symétrique");
   }
}
}
