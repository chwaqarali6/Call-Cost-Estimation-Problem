#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	//Initializing Variables
	int StartingHour = 0, StartingMin = 0, StartingTime = 0, EndingTime = 0, Length = 0, temp1 = 0;
	char Day;
	float Charges = 0;

	//Taking Inputs
	cout << "Please Enter The Starting Hour In 24 Hour Notion:- ";
	cin >> StartingHour;
	cout << "Please Enter The Starting Minutes:- ";
	cin >> StartingMin;
	cout << "Please Enter The Length Of Call In Minutes:- ";
	cin >> Length;
	cout << "Please Enter Initial Of The Day Name:- ";
	cin >> Day;

	//Calcualting Starting Time In Minutes And The Ending Time Of Call
	StartingTime = (StartingHour * 60) + StartingMin;
	EndingTime = StartingTime + Length;

	//Condition To Check Whether The Day is Saturday/Sunday Or Not
	if (Day == 'S' || Day == 's')
	{
		Charges = Length*1.5;
		cout << "\nThe Charges Of Call Duration Is " << Charges;
	}
	//Condition To Check if Time Is Correct Or Not
	else if (StartingTime > 0 && StartingTime < 1441)
	{
		//Conditons To Calculate Charges Of Call According To The Time Of Call
		if (StartingTime<480 && EndingTime>1080)
		{
			Charges = ((480 - StartingTime)*3.25) + (600 * 5) + ((EndingTime - 1080)*3.25);
			cout << "\nThe Charges Of Call Duration Is " << Charges;
		}
		else if (StartingTime<480 && EndingTime <= 480)
		{
			Charges = Length*3.25;
			cout << "\nThe Charges Of Call Duration Is " << Charges;
		}
		else if (StartingTime<480 && EndingTime <= 1080)
		{
			Charges = ((480 - StartingTime)*3.25) + ((EndingTime - 480) * 5);
			cout << "\nThe Charges Of Call Duration Is " << Charges;
		}
		else if (StartingTime >= 1080 && EndingTime>1080)
		{
			Charges = Length*3.25;
			cout << "\nThe Charges Of Call Duration Is " << Charges;
		}
		else if (StartingTime >= 480 && EndingTime <= 1080)
		{
			Charges = Length * 5;
			cout << "\nThe Charges Of Call Duration Is " << Charges;
		}
		else if (StartingTime >= 480 && EndingTime>1080)
		{
			Charges = ((1080 - StartingTime) * 5) + ((EndingTime - 1080)*3.25);
			cout << "\nThe Charges Of Call Duration Is " << Charges;
		}
		else
		{
			cout << "Invalid Input";
		}

	}
	else
	{
		cout << "Invalid Input";
	}

	_getch();
}