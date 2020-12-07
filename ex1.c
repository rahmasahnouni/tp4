#include <stdio.h>
void main ()
{
    int tableau[20],n,i;
    do
    {
        printf("donner la taile du tableau");
        scanf("%d",&n);
    }while ((n<0)||(n>20));
    for (i=0;i<n;i++)
    {
        scanf("%d",&tableau[i]);
    }

    for (i=0;i<n;i++)
    {
        printf("%d \t",tableau[i]);
    }
}
