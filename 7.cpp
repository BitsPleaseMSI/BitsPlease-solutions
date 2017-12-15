#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int ir,fr,i,j,count,n;
 cin>>n;
 while(n)
 {
 cin>>ir>>fr;
   for(i=ir;i<=fr;i++)
   {
    count=0;
    for(j=1;j<=i;j++)
     {
      if(i%j==0)
       count++;
     }
     if(count==2)
     cout<<i<<" ";
    }
cout<<"\n";
n--;
}
    getch();
    return 0;
}
