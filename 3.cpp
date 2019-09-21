#include <iostream>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases!=0)
    {
    cases--;
    int i=0,len,sum=0,pos=0,neg=0,pos2=0;
    cin>>len;
    int s[len];
    for(int j=0;j<len ;j++)
        cin>>s[j];

    while(i!=len)
    {
     if(i==0)
     while(s[i]<0)
     i++;

     pos=0;
     while(s[i]>0)
     {
        if(i==len)
         break;
        pos=s[i]+pos;
        i++;
     }
     neg=0;
     while(s[i]<0)
     {
        if(i==len)
         break;
        neg=neg+s[i];
        i++;
     }
    pos2=0;
     while(s[i]<0)
     {
        if(i==len)
         break;
        pos2=s[i]+pos;
        i++;
     }

    if(neg+pos2>0)
        sum=pos+pos2+neg+sum;
    if(pos2>sum)
        sum=pos2;
    }
    cout<<sum<<endl;
    }
    return 0;
}
