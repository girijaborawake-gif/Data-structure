#include <iostream>
using namespace std;

int main()
{
	int stack[5];
	int top=-1;

	cout<<"\n Enter 5 cancelled orders number:\n";

	for(int i=0 ; i<5 ; i++)
	{
		cin>>stack[++top];
	}

	cout<<"\n RECENTLY CANCELLED ORDERS:\n";

	while (top>=0)
	{
		cout<<stack[top]<<endl;
		top--;
	}
	return 0;
}
