#include<iostream>
using namespace std;
int main()
{
int n,m,i,a[30],b[30],sum[30],x,l;

//initialising sum array as 0
for(i=0;i<30;i++)
{
sum[i]=0;
a[i]=0;
b[i]=0;
}

//input array 1
cin>>n;
for(i=0;i<n;i++)
cin>>a[i];

//input array 2
cin>>m;
for(i=0;i<m;i++)
cin>>b[i];

//array resizing
if(n>m)
{ 
l=n-m; 
for(i=m;i>=0;i--)
b[i+l]=b[i];
for(i=0;i<l;i++)
b[i]=0;
}

if(m>n)
{ 
l=m-n; 
for(i=n;i>=0;i--)
a[i+l]=a[i];
for(i=0;i<l;i++)
a[i]=0;
}

x=n>m?n:m;

//adding the array
for(i=x;i>=0;i--)
{                               
//case 1: sum<10                 
if(a[i]+b[i]<10)
sum[i]+=a[i]+b[i];
//case 2: sum>=10, i!=0
else if(a[i]+b[i]>=10)
{
sum[i-1]+=1;
sum[i]+=(a[i]+b[i])-10;
}
//case 3: sum>=10, i=0
if(i==0&&(a[i]+b[i]>=10))
{
for(i=x;i>=0;i--)
sum[i+1]=sum[i];
sum[0]=1;
}
}

//display
for(i=0;i<x;i++)
cout<<sum[i];

return 0;
}    
    
    
    
    
    
    
    
    
