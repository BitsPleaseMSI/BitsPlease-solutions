#include<iostream>
using namespace std;
int main()
{
int n,m,i,sum,v1=0,v2=0;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
 cin>>a[i];
 v1=v1*10+a[i];
} 
cin>>m;
int b[m];
for(i=0;i<m;i++)
{
 cin>>b[i];
 v2=v2*10+b[i];
}
sum=v1+v2;
cout<<sum;   
return 0;
}    
    
    
    
    
    
    
    
    
