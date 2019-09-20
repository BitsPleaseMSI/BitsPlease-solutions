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
    for(int i=0;i<len ;i++)
        cin>>s[i];

    while(i!=len-1)
    {
     pos=0;
     while(s[i]>0)
     {
        if(i==len-1)
         break;
        pos=s[i]+pos;
        i++;
     }
     neg=0;
     while(s[i]<0)
     {
        if(i==len-1)
         break;
        neg=neg+s[i];
        i++;
     }
    pos2=0;
     while(s[i]>0)
     {
        if(i==len-1)
         break;
        pos2=s[i]+pos;
        i++;
     }

    if(neg+pos2>0)
        sum=pos+pos2+neg+sum;
    if(pos2>pos && sum<pos2)
        sum=pos2;
    }
    cout<<sum<<endl;
    }
    return 0;
}
