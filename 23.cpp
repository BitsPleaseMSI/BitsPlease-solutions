#include<bits/stdc++.h>
using namespace std;
int main()
{
int cases;
cin>>cases;             //to get no of cases
while(cases--)
{
    string input_string;
    cin>>input_string;          //to store no of input string
    int leng=input_string.length();     
    int i=0,pair=0;
        while(i!=leng-1)
        {
            if(input_string[i]=='(' && input_string[i+1]==')')  //to get total number of complete pair
                pair+=2;
            i++;
        }
    cout<<leng-pair;    //difference between total length and complete pairs
}
return 0;
}
