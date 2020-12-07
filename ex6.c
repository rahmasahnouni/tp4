#include <stdio.h>
int tableau[30];
void main ()
{ int n,i,aux  ;
   do
   {
      printf("donner le nombre de case du tableau\n");
      scanf("%d",&n);
   }while((n<0)||(n>30));
for (i=0 ; i<n ; i++)
{
  scanf("%d",&tableau[i]);
}
for (i=0 ; i<n ; i++)
{
  printf("%d\t",tableau[i]);
}
 for (i=0 ; i< n/2 ; i++)
 {
    aux=tableau[i];
    tableau[i]=tableau[n-i+1];
    tableau[n-i+1]=aux;
 }
 printf("\n");
 for (i=0 ; i<n ; i++)
{
  printf("%d\t",tableau[i]);
}

}
