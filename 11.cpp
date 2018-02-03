#include<iostream>

using namespace std;

int main()
{
	int i=0;
	double launch_speed, final_speed, distance;
	cin>>launch_speed;
	// speed entered is in Kmph, so we are converting it in mps
	launch_speed = (launch_speed * 5)/18;
	// using the third law of motion
	final_speed = ( launch_speed * launch_speed ) + (2*-10*500);
	if(final_speed>=0)
	{
		/*  using the third law of motion
			Final velocity is zero, and final_speed is considered as
			initial velocity for motion above 0.5 Km
		*/
		distance = final_speed/(2*5);
		distance = distance + 500;
		// Since distance calculated is in metres, so converting it to Km
		cout<<distance/1000;
	}
	else
	{
		// If distance covered is less than 0.5 Km, i.e. Failed Launch
		cout<<-1;
	}
	getch();
	return 0;
}

