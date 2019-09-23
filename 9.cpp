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
    int gmap[msize][msize]={};          //to initialize array with all elements=0

    mid_x=mid_y=msize/2;
    gmap[mid_x][mid_y]=1;               //since starting position is
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

        if(gmap[mid_x+x][mid_y+y]==0)
        {
            gmap[mid_x+x][mid_y+y]=1;   //thanks to Animesh Ghosh for better count loop
            total++;
        }

    }
    cout<<total+1;
    return 0;
}
