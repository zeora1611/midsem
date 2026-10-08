#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> printer;
    int choice;
    string document;

    do
    {
        cout << "\n===== Printer Queue =====\n";
        cout << "1. Add Document\n";
        cout << "2. Print Next Document\n";
        cout << "3. Display Pending Documents\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter document name: ";
            cin >> document;

            printer.push(document);
            cout << "Document added.\n";
        }

        else if (choice == 2)
        {
            if (printer.empty())
            {
                cout << "No documents to print.\n";
            }
            else
            {
                cout << "Printing: " << printer.front() << endl;
                printer.pop();
            }
        }

        else if (choice == 3)
        {
            if (printer.empty())
            {
                cout << "No pending documents.\n";
            }
            else
            {
                queue<string> temp = printer;

                cout << "Pending Documents:\n";

                while (!temp.empty())
                {
                    cout << temp.front() << endl;
                    temp.pop();
                }
            }
        }

        else if (choice == 4)
        {
            cout << "Exiting...\n";
        }

        else
        {
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}
