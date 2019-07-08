#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
int counter;

cout << "-----------------------------------------------------\n";

for(counter = 1; counter < 10; counter ++)
cout << counter << ", ";

for (counter = 10; counter < 21; counter +=2)
cout << counter << ", ";

cout << "\n-----------------------------------------------------";

getch();
return 0;
}

