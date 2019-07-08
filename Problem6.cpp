#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int sum, whole;
	
	sum = 0;
	
	cout << "SUMMATION CALCULATOR\n\n";
	
	do
	{
		cout << "Enter a whole number: "; 
		cin >> whole;
		
		for (int i=0; i<=whole; i++)
		{
			sum += i;
		}
		cout << "The sum of whole numbers from 1 to " << whole << " is " << sum << endl;
		sum = 0;
		
		if(whole<=0)
		{
			cout << "Thank you!";
			break;
		}
	}
	while(whole!=0);
	
	getch();
	return 0;
}
