#include <iostream>
#include <string>
using namespace std;
int main()
{
    string directions;
    int str_size,msize,mid_x,mid_y,x=0,y=0,total=0;
    getline(cin,directions);
    str_size=directions.length();
    msize=(2*str_size)+1;
    int gmap[msize][msize]={};      //to initialize array with all elements=0

    mid_x=msize/2;
    mid_y=mid_x;
    gmap[mid_x][mid_y]={1};           //since starting position is
                                      //considered a house
    for(int i=0;i<msize;i++)
    {
        if(directions[i]=='<')
        y--;
        else if(directions[i]=='>')
        y++;
        else if(directions[i]=='^')
        x--;
        else if(directions[i]=='V')
        x++;

        gmap[mid_x+x][mid_y+y]={1};

    }

    for(int i=0;i<msize;i++)
    {
        for(int j=0; j<msize ;j++)
        if(gmap[i][j]==1)
        total++;
    }

    cout<<total;

    return 0;
}
