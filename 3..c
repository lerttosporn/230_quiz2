#include<stdio.h>
int main()
{
    int n,i,m,k,l,tmp1=0,tmp2=0,chk=0,cnt;
    scanf("%d",&n);
    for(k=1; k<n; k++)
    {   cnt=k;
        m=k;
        for(i=0; cnt!=0; i++)
        {
            cnt=cnt/10;
        }
        int ar[i],pa[i],j;
        for(j=0; m!=0; j++)
        {
            ar[j]=m%10;
            m=m/10;
        }
        for(l=j; l>0; l--)
        {
            pa[l-1]=ar[j-l];
        }
        for(j=0; j<i; j++)
        {
            tmp1=tmp1+ar[j];
            tmp1=tmp1*10;
            tmp2=tmp2+pa[j];
            tmp2=tmp2*10;
        }
        tmp1=tmp1/10;
        tmp2=tmp2/10;
        if(tmp1==tmp2)
        {
            chk++;
        }
        tmp1=0;
        tmp2=0;
    }
    printf("%d",chk);
    return 0;
}
