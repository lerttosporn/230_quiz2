#include<stdio.h>
int main()
{
    int n,m,i=2,ch=0,j,tmp=0,chk=0,k,chk1=0;
    scanf("%d",&n);
    m=n;
    if(n!=1)
    {
        while(n!=1)
        {
            if(n%i==0)
            {
                n=n/i;
                ch++;
                chk1++;
            }
            else
            {
                ch=0;
                i++;
            }
            if(ch>=3&&ch%3==0&&chk1%3==0&&n==1)
            {
                break;
            }
        }
    }
    if(ch>=3&&ch%3==0&&chk1%3==0&&n==1)
    {
        printf("Not Cube Free");
    }
    else
    {
        for(j=1; j<m; j++)
        {
            k=j;
            i=2;
            chk1=0;
            chk=0;
            while(k!=1)
            {
                if(k%i==0)
                {
                    k=k/i;
                    chk++;
                    chk1++;
                }
                else
                {
                    chk=0;
                    i++;
                }
            }
            if(chk>=3&&chk%3==0&&chk1%3==0&&n==1)
                {
                    tmp++;
                }
        }
        printf("%d ",m-tmp);
    }
    return 0;
}
