#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   
    int n,i,j,k;
    cin>>n;
    for(i=0;i<(n+1)/2;i++)
    {
        for(k=0;k<i;k++)
        cout<<" ";
        for(j=0;j<=i;j++)
        cout<<"*";
        cout<<"\n";
    }    
    for(i=(n-1)/2;i>0;i--)
    {
        for(k=i-1;k>0;k--)
        cout<<" ";
        for(j=i;j>0;j--)
        cout<<"*";
        cout<<"\n";
    }                                 
    getch();
    return 0;
}                
