#include <iostream>
using namespace std;

int main()
{
    int rollNo[10];
    int marks[10];
    int n = 0;
    int choice;
    int searchRollNo;

    do
    {
        cout << "\n\n==== STUDENT MANAGEMENT SYSTEM ====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";
        cout << "\nEnter your Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            if (n < 10)
            {
                cout << "Enter Roll No: ";
                cin >> rollNo[n];

                cout << "Enter Marks: ";
                cin >> marks[n];

                n++;

                cout << "STUDENT ADDED";
            }
        }
        else if (choice == 2)
        {
            cout << "\nStudent Records:\n";

            if (n == 0)
            {
                cout << "NO STUDENT RECORDS AVAILABLE";
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    cout << "Roll No: " << rollNo[i];
                    cout << "  Marks: " << marks[i] << endl;
                }
            }
        }
        else if (choice == 3)
        {
            cout << "Enter Roll No to Search: ";
            cin >> searchRollNo;

            bool found = false;

            for (int i = 0; i < n; i++)
            {
                if (rollNo[i] == searchRollNo)
                {
                    found = true;

                    cout << "STUDENT FOUND";
                    cout << "\nRoll No: " << rollNo[i];
                    cout << "\nMarks: " << marks[i];

                    break;
                }
            }

            if (found)
            {
                cout << "STUDENT FOUND";
            }
             else
            {
                cout << "BOOK NOT FOUND";
            }
        }
        else if (choice == 4)
        {
            cout << "THANK YOU!";
        }
        else
        {
            cout << "INVALID CHOICE!";
        }

    } while (choice != 4);

    return 0;
}
