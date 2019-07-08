#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	double PrevMonthBill, RecMonthBill, WaterBillTotal, Gallons;
	int WaterDemand = 35, ConsumptionCharge = 1.10, LateFee = 20;
	
	cout << "WATER BILL CALCULATOR!" << endl << endl;
	
	cout << "Enter the amount of your bill for the previous month: ";
	cin >> PrevMonthBill;
	
	cout << "Enter the amount of your bill for the recent month: ";
	cin >> RecMonthBill;
	
	cout << "Enter how many gallons used: ";
	cin >> Gallons;
	
	if (PrevMonthBill > 0)
	{
		WaterBillTotal = PrevMonthBill + RecMonthBill + WaterDemand + (ConsumptionCharge * Gallons) + LateFee;
		cout << "\nYour total water bill with late charges is: P" << WaterBillTotal;
	}
	else if (PrevMonthBill == 0)
	{
		WaterBillTotal = RecMonthBill + WaterDemand + (ConsumptionCharge * Gallons);
		cout << "\nYour total water bill is: P" << WaterBillTotal;
	}
	else
	{
		cout << "\nYour input is invalid!";
	}
	
	getch();
	return 0;
}
