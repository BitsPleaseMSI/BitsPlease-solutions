#include<iostream>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases!=0)
    {
    cases--;
    int n,m;
    cin>>n;
    m=2*n+1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i==j || j==(m+1)/2 || i+j-1==m )
                cout<<"*";
            else
                cout<<0;
        }
    cout<<endl;
    }
    }
    return 0;
}
