#include<stdio.h>
int main()
{
    int v[2004],i,p,l=0;
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        scanf("%d",&v[i]);
        if(v[i]>0)
        {
            l+=v[i];
        }
    }
    printf("%d",(2*l)-1);
}