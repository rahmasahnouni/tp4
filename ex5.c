#include <stdio.h>
void main()
{
    int t[20],i,n,x,occ;
   do
 {
      printf("donner le nombre de case du tableau\n");
      scanf("%d",&n);
}while((n<0)||(n>20));
for (i=0 ; i<n ; i++)
{
  scanf("%d",&t[i]);
}
printf("donner un entier x");
scanf("%d",&x);
occ=0;
do
{
    for (i=0 ; i<n; i++)
        if (t[i]==x)
    {
        occ=occ+1;
    }

}while (!(t[i]!=x)) ;
printf ("le nombre d'occurence de %d = %d",x,occ);

}
