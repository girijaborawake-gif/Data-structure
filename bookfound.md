#include <iostream>
using namespace std;

int main()
{
    int book[5];
    int SearchId;

    cout << "Enter 5 book IDs:\n";

    for (int i = 0; i < 5; i++)
    {
        cin >> book[i];
    }

    cout << "\nEnter Book ID to search: ";
    cin >> SearchId;

    for (int i = 0; i < 5; i++)
    {
        if (book[i] == SearchId)
        {
            cout << "Book found";
            return 0;
        }
    }
    {
        cout << "Book not found";
    }

    return 0;
}
