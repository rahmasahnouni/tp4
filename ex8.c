#include<stdio.h>
#include<ctype.h>
void main()
{
    char t[20];
    int i,n;
    do
    {
        printf("taper n=  ");
        scanf("%d",&n);
    }while ((n>20) || (n<=0));
    for (i=0;i<n;i++)
    {
printf("t[%d]:= \n",i);
        scanf(" %c",&t[i]);

    }

printf("t= ");
for (i=0;i<n;i++)
    {
        printf("%c",t[i]);
    }
for (i=0;i<n;i++)
    {
      if (isupper(t[i])!=0)
      {
      t[i]= tolower(t[i]);
      }
      else
      {
          t[i]= toupper(t[i]);
      }
    }
printf("\n apres conversion \n t= ");
for (i=0;i<n;i++)
    {
        printf("%c",t[i]);
    }

}
