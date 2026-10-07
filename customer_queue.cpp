#include <iostream>
using namespace std;

int main()
{
	int queue[5];
	int front=0;
	int rear=0;

	cout<<"\n Enter 5 customer order number:\n";

	for (int i=0 ; i<5 ; i++)
	{
		cin>>queue[rear];
		rear++;
	}
	cout<<"\n Processing order:\n";
	while(front<rear)
	{
		cout<<"\n Processing Orders:"<<queue[front]<<endl;
		front++;
	}

return 0;
}
