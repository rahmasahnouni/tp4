#include <stdio.h>

void main ()
{ int tableau[20],n,i,s,min ;
   do
   {
      printf("donner le nombre de case du tableau\n");
      scanf("%d",&n);
   }while((n<0)||(n>30));
for (i=0 ; i<n ; i++)
{
  scanf("%d",&tableau[i]);
}
s=0; min=1;
for (i=0 ; i<n ; i++)
{
  s=s+tableau[i];
  if (tableau[min]>tableau[i])
  {
     min=i;
  }
}
printf("la somme des �l�ments de tableau =%d",s);
printf("\nle plus petit �lement du tableau =%d ",tableau[min]);

}
