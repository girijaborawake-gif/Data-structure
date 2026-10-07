#include <iostream>
using namespace std;

int main()
{
	int token[5];
	int front=0;
	int rear=0;

	cout<<"\n Enter 5 customer's token number:\n";

	for (int i=0 ; i<5 ; i++)
	{
		cin>>token[rear];
		rear++;
	}
	cout<<"\n TOKEN NUMBER ORDER :\n";
	while(front<rear)
	{
		cout<<"\n TOKEN ORDER :"<<token[front]<<endl;
		front++;
	}

return 0;
}
