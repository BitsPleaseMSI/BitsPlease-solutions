#include<iostream>
using namespace std;
int main()
{
    int t_cases,n,i,j,l_tow[10],sig;
    cin>>t_cases;
    while(t_cases)
    {
                  cin>>n;
                  for(i=0;i<n;i++)
                  cin>>l_tow[i];
                  for(i=0;i<n;i++)
                  {
                                     j=i-2;
                                     sig=1;
                                     if(i==0)
                                     sig=0;
                                     if(l_tow[j+1]<l_tow[i])
                                     while(j>=0)
                                     {
                                                sig++;
                                                if(l_tow[j]>=l_tow[i])
                                                break;
                                                j--;                       
                                     }
                                     cout<<sig<<" ";                                     
                  }
                  cout<<"\n";
                  t_cases--;
    }
    return 0;
}
                                        
