#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int ch, a[9];
	int f=0 ,g=0 ,h=0, c, s=0,r,i;

	cin>>ch;
	if(ch%9==0)          // checking 1st condition
        f =1;

       i = 0;
    while(ch>0)         // checking 3rd condition
    {
        r = ch%10;
        s += r;
        ch = ch/10;
        a[i] = r;
        i++;
    }
	if(s >=40)
        h =1;

    for(int i= 0; i<9 ;i++)     // checking 2nd condition
    {
        c = 0;
        for(int j=0;j<9; j++)
        {
            if(a[i] == a[j])
                c= c +1;

        }
        if(c ==3)
            g =1;
    }

    if(f==1 && g == 1 && h==1)
        cout<<"Original";

    else
        cout<<"fake";
 }

