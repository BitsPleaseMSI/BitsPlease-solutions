#include <iostream>
#include <string>
using namespace std;
int main()
{
    string directions;
    int str_size,msize,mid_x,mid_y,x=0,y=0,total=0,lt=0,rt=0,up=0,dwn=0;
    getline(cin,directions);
    str_size=directions.length();
    msize=(2*str_size)+1;
    int gmap[msize][msize]={};      //to initialize array with all elements=0

    mid_x=mid_y=msize/2;
    gmap[mid_x][mid_y]=1;           //since starting position is
                                      //considered a house
    for(int i=0;i<msize;i++)
    {
        if(directions[i]=='<')
        {y--;
        lt++;}
        else if(directions[i]=='>')
        {y++;
        rt++;}
        else if(directions[i]=='^')
        {x--;
        up++;}
        else if(directions[i]=='V')
        {x++;
        dwn++;}

        gmap[mid_x+x][mid_y+y]=1;


    }
    int strt,termnt,s_strt,s_termnt;
    strt=str_size-up-1;
    termnt=msize-(str_size-dwn)-1;
    s_strt=str_size-lt-1;
    s_termnt=msize-(str_size-rt)-1;

    for(int i=strt; i<=termnt; i++)            //Another loop is required to count
    {                                         //to get correct and unbiased values
        for(int j=s_strt; j<=s_termnt ;j++)
        if(gmap[i][j]==1)
        total++;
    }

    cout<<total;

    return 0;
}
