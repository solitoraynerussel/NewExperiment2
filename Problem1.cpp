#include <iostream>
#include <conio.h>

using namespace std;

int main() 

{
 char package;
 int time, price;
 
 	cout << "Choose between these packages\n";
	cout << "Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr.\n";
	cout << "Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr\n";
	cout << "Package C: For P1995/mo of unlimited access is provided.\n";
	cout <<"\n";
 
	 cout << "Enter your chosen package: ";
	 cin >> package;
	 

 switch(package)
{

case 'A':
case 'a':
{
cout << "Number of hours used: ";
cin >> time;
if (time > 10)
{	
price = 995 + (time - 10) * 20;
cout << "Total charges is equal to: P" << price;
break;
}
else 
{
price = 995;
cout << "Total charges is equal to: P" << price;
break;
}
}

case 'B':
case 'b':
{
cout << "Number of hours used: ";
cin >> time;
if (time > 20) 
{
price = 1495 + (time - 20) * 10;
cout << "Total charges is equal to: P" << price;
break;
} else
{
price = 1495;
cout << "Total charges is equal to: P" << price;
break;
}
} 

case 'C':
case 'c':
{
price = 1995;
cout << "Total charges is equal to: P" << price;
break;
}
 
default:
 cout << "Invalid package! Choose only A, B and C";
}

getch();
return 0;
}
