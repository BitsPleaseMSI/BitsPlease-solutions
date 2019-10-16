#include<bits/stdc++.h>
using namespace std;
int main()
{
int cases,cases1;
cin>>cases;
cases1=cases;
int ar[cases];
while(cases1!=0)
{
    string input_string;
    cin>>input_string;
    int leng=input_string.length();
    int i=0,flag=0;
        while(i!=leng-1)
        {
            if(input_string[i]=='(' && input_string[i+1]==')')
                flag+=2;
            i++;
        }
    ar[cases-cases1]=leng-flag;
    cases1--;
}
for(int i=0;i<cases;i++)
    cout<<ar[i]<<endl;
return 0;
}
