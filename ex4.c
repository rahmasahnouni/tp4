#include <stdio.h>
void main()
{
 int t[20],n,i,s1,s2;
 do
 {
      printf("donner le nombre de case du tableau\n");
      scanf("%d",&n);
}while((n<0)||(n>20));
for (i=0 ; i<n ; i++)
{
  scanf("%d",&t[i]);
}
s1=0;
for (i=0 ; i<n/2 ; i++)
{
    s1=s1+t[i];
}
s2=0;

for (i=(n/2)+1 ; i<n ; i++)
{
    s2=s2+t[i];
}
if(s1==s2 )
{
    printf("le tableau est en somme parfait");
}
else
{
  printf("le tableau n'est pas en somme parfait");
}

}
