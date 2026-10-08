#include <iostream>
using namespace std;

int main()
{
    int token[10];
    int n = 0;
    int choice;

    do
    {
        cout << "\n\n==== BANK TOKEN SYSTEM ====";
        cout << "\n1. Issue Token";
        cout << "\n2. Display All Tokens";
        cout << "\n3. Serve Customer";
        cout << "\n4. Exit";
        cout << "\nEnter your Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            token[n] = n + 1;
            cout << "Token Issued: " << token[n];
            n++;
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                cout << "\nNo tokens available.";
            }
            else
            {
                cout << "\nTokens in Queue:\n";

                for (int i = 0; i < n; i++)
                {
                    cout << token[i] << endl;
                }
            }
        }
        else if (choice == 3)
        {
            if (n == 0)
            {
                cout << "\nNo customer to serve.";
            }
            else
            {
                cout << "\nServing Customer with Token: " << token[0];

                for (int i = 0; i < n - 1; i++)
                {
                    token[i] = token[i + 1];
                }

                n--;
            }
        }
        else if (choice == 4)
        {
            cout << "\nTHANK YOU!";
        }
        else
        {
            cout << "\nINVALID CHOICE!";
        }

    } while (choice != 4);

    return 0;
}
