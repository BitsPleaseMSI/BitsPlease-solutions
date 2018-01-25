#include<iostream>
using namespace std;
int main()
{  
   int test_cases,step_covered,step_req,order_no;
   cin>>test_cases;
   while(test_cases)
   {
                    order_no=0;
                    step_covered=0;
                    cin>>step_req;
                    do
                    {
                            order_no+=1;
                            if(order_no%2==0) step_covered-=3;
                            if(order_no%2!=0) step_covered+=5;
                    }
                    while(step_covered<=step_req);
                    cout<<order_no<<endl;
                    test_cases--;
   }                         
   return 0;
}
