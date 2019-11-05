#include<bits/stdc++.h>
using namespace std;

bool trap_the_traper(int ar[],int target)
{
    int a=ar[0],b=ar[1],c=ar[2];          // a,b,c store the button values 
    ar[0]=target-a-b;                            //now the array contain all the new targets
    ar[1]=target-a-c;
    ar[2]=target-b-c;
    
    int temp,temp2;
    for(int i=0 ;i<3 ;i++)                  //loop to search for even permutation
        for(int x=0 ;x<=target ;x++)
            {
            temp=a*x;
            for(int y=0 ;b*y<=target-temp ;y++)
                {
                temp2=b*y;
                for(int z=0 ;z*c<=target-temp-temp2 ;z++)   
                    if(ar[i]==temp+temp2+(z*c) && (x+y+z)%2==0)
                        return  false;                                            
                }
            }            

    return true;
}

int main()
{
    int test_cases;
    cin>>test_cases;
    while(test_cases--)
    {
            int button_val[3];
            for(int i=0 ;i<3 ;i++)
                cin>>button_val[i];
         
            int target;
            cin>>target;
        
        if(trap_the_traper(button_val,target)==true) 
            cout<<"By going first one can force a win"<<endl;
        else
            cout<<"By going second one can force a win"<<endl;
    }
    return 0;
}
/*
Consider the example of 21 floor with buttons 1,5,9.
let us assume we are playing first,then If we anayalze the last step of the game we will realise that-
the last turn shall be ours and last second turn shall be of hacker in the winning case,
and thus the only possible ways of pressing buutons in last and last second turns are; 

hacker  Us
1       5   //1+5=6
1       9   //1+9=10
5       9   //5+9=14            (their reverse doesnt matter as end result will be same)

Now,if we fix these last steps,then the total floors left for us to cover will be either 21-6 or 21-10 or 21-14
i.e. 15,11,7.

now if any permutations of (1*x)+(5*y)+(9*z) = 15 or 11 or 7 ,such that the sum of x+y+z=even.(it means even count of total button pressed)
Then the hacker played first,and our assumtion of playing first was wrong but we still won.(even count means hacker played first)
Also,if none of the above even permutation is found then by playing first we are sure to win.
*/