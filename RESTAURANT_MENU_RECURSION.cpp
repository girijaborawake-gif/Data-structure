#include <iostream>
using namespace std;

void menu()
{
	int choice;

	cout<<"\n\n ===========RESTAURANT MENU================";
	cout<<"\n1 PIZZA";
	cout<<"\n2 BURGER";
	cout<<"\n3 PASTA";
	cout<<"\n4 EXIST";

	cout<<"\n ENTER YOUR CHOICE:";
	cin>>choice;

	if (choice == 1)
	{
		cout<<"YOU SELECTED PIZZA!!!!";
		menu();
	}

	else if (choice == 2)
	{
		cout<<"YOU SELECTED BURGER!!!!";
                menu();
	}

	else if (choice == 3)
	{
		cout<<"YOU SELECTED PASTA!!!!";
                menu();
	}

	else if (choice == 4)
	{
		cout<<"\n THANK YOU FOR VISTING!!!!!";
	}

	else
	{
		cout<<"/n INVALID CHOICE!!";
		menu();
	}
}

int main()
{
	menu();
	return 0;
}
