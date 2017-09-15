#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	/*
	 * Since its hard to process a single integer value.
	 * So, we input serial number as string and convert
	 * it as array of integers
	*/
	char serial_num[9];
	int serial[9], test, flag=0, sum=0;
	gets(serial_num);
	for(int i=0; i<9; i++)
	{
		serial[i] = (int)serial_num[i]-48;
	}
	cout<<"\n\n";
	for(int i=0; i<9; i++)
	{
		cout<<serial[i];
	}
	
	// To check if a digit repeats itself 3 times.
	for(int j=0; j<7; j++)
	{
		test = serial[j];
		for(int i=0; i<9; i++)
		{
			if(serial[i]==test)
			{
				if(serial[i+1]==test && serial[i+2]==test)
					flag = 1;
			}
		}
	}
	
	// To do divisibility test and check sum
	for(int i=0; i<9; i++)
	{
		sum = sum + serial[i];
	}
	if(flag==1 && sum>40 && sum%9==0)
		cout<<"\nOriginal";
	else
		cout<<"\nFake";
	getch();
	return 0;
}

