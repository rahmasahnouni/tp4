#include <stdio.h>
void main ()
{
    int t[30];
    int i,n,x,p;
    do
    {
        printf("donner la taille du tableau ");
        scanf("%d",&n);
    }while((n<0)||(n>30));
    for(i=0;i<=n-1;i++)
    {
        printf("t[%d]= ",i);
        scanf("%d",&t[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        printf("%d \t",t[i]);
    }
    printf("donner un entier ");
    scanf("%d",x);
    i=0;
    while ((t[i]!=x)&&(i<=n))
    {
        i++;
    }
    if (i>=n)
    {
        printf("%d n'existe pas dans le tableau",x);
    }
    else
    {
        p=i;

        printf("%d existe dans le %d eme case du tableau",x,p);
    }
}
