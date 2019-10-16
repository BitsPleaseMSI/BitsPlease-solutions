#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int l,c,r,cr,count;
    scanf("%s",s);
    l=strlen(s);
    cr=2*l+1;
    int a[cr][cr];
    for(int i=0;i<cr;i++)
        for(int j=0;j<cr;j++)
            a[i][j]=0;
    c=r=(l/2)+1;
    a[r][c]=1;
    for(int k=0;k<l;k++)
    {
        if(s[k]=='^')
        {
            a[r-1][c]=1;
            r--;
        }
        else if(s[k]=='>')
        {
            a[r][c+1]=1;
            c++;
        }    
        else if(s[k]=='v'||s[k]=='V')
        {
            a[r+1][c]=1;
            r++;
        }
        else if(s[k]=='<')
        {
            a[r][c-1]=1;
            c--;
        }

    }
    for(int p=0;p<cr;p++)
       for(int q=0;q<cr;q++)
       {
           if(a[p][q]==1)
           count++;
       }    
    printf("\n%d ",count);   
    

}
