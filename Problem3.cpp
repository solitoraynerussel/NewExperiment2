#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	const double z = 2.5;
	double y, v, a, b;
	int x;
	
	cout << "Input value of x: ";
	cin >> x;
	cout << "Input value of y: ";
	cin >> y;
	
	switch(x)
	{
		case 1:
		cout << fixed << showpoint << setprecision(2);
		if (y>1 && y<5)
		{
			v = x * y * z;
			cout << setw(10) << "V = " << v;
			break;
		}
		else if (y>=5)
		{
			v = x + (y / z);
			cout << setw(10) << "V = " << v;
			break;
		}
		break;
		
		case 2:
		cout << fixed << showpoint << setprecision(2);
		if (y<=5)
		{
			a = (x - y) / z;
			v = abs(a);
			cout << setw(10) << "V = " << v;
			break;
		}
		else if (y>5)
		{
			b = sqrt (y + z);
			v = x - b;
			cout << setw(10) << "V = " << v;
			break;
		}
		break;
		
		default:
			cout << fixed << showpoint << setprecision(2);
			v = x + y + z;
			cout << setw(10) << "V = " << v;
	}
	getch();
	return 0;
}
