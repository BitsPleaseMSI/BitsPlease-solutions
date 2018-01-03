#include<iostream>
using namespace std;
int main()
{
    int n,i,k,j,test_cases;
    cin>>test_cases;
    while(test_cases)
    {
               cin>>n;
               for(i=0;i<n;i++)
               {
                    for(j=0;j<i;j++)
                    cout<<"0";
                    cout<<"*";
                    for(k=0;k<2;k++)
                    {
                                    for(j=i+1;j<n;j++)
                                    cout<<"0";
                                    cout<<"*";
                    }
                    for(j=0;j<i;j++)
                    cout<<"0";
                    cout<<"\n";
               }
               cout<<"\n";
               test_cases--;
    }
    return 0;
}
    
