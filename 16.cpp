#include<iostream>
using namespace std;
int main() 
{
    char str[50];
    int n,res[50],i,sum=0;
    cin>>n;
    while(n)
    {
    cin.getline(str,50);
    sum=0;
    for(i=0;i<50;i++)
    switch(str[i])
     {
     case '(':
          res[i]=1;
          break;
     case '{':
          res[i]=2;
          break;
     case '[':
          res[i]=3;
          break;
     case ')':
          res[i]=-1;
          break;
     case '}':
          res[i]=-2;
          break;
     case ']':
          res[i]=-3;
          break;
     default:
          res[i]=0;
     }     
     for(i=0;i<50;i++)
     sum+=res[i];
     if(sum==0)
     cout<<"\nYes";
     else
     cout<<"\nNo";
     n--;
    }
return 0;
}
