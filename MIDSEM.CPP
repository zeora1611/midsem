```cpp
#include <iostream>
using namespace std;

class Product
{
public:
    string id;
    string name;
    float price;
    int quantity;
};

int main()
{
    Product p[40];
    int count = 0;
    int choice;
    float revenue = 0;

    do
    {
        cout << "\n===== Inventory Tracker =====\n";
        cout << "1. Add Product\n";
        cout << "2. Restock Product\n";
        cout << "3. Sell Product\n";
        cout << "4. Low Stock\n";
        cout << "5. Revenue\n";
        cout << "6. Display All\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                string id;
                cout << "ID: ";
                cin >> id;

                bool exists = false;

                for(int i = 0; i < count; i++)
                {
                    if(p[i].id == id)
                    {
                        exists = true;
                    }
                }

                if(exists)
                {
                    cout << "Product ID already exists\n";
                }
                else
                {
                    p[count].id = id;

                    cout << "Name: ";
                    cin >> p[count].name;

                    cout << "Price: ";
                    cin >> p[count].price;

                    cout << "Quantity: ";
                    cin >> p[count].quantity;

                    count++;

                    cout << "Product added.\n";
                }

                break;
            }

            case 2:
            {
                string id;
                int qty;

                cout << "Product ID: ";
                cin >> id;

                bool found = false;

                for(int i = 0; i < count; i++)
                {
                    if(p[i].id == id)
                    {
                        cout << "Quantity to add: ";
                        cin >> qty;

                        p[i].quantity += qty;

                        cout << "Product restocked.\n";
                        found = true;
                    }
                }

                if(!found)
                    cout << "Product not found.\n";

                break;
            }

            case 3:
            {
                string id;
                int qty;

                cout << "Product ID: ";
                cin >> id;

                bool found = false;

                for(int i = 0; i < count; i++)
                {
                    if(p[i].id == id)
                    {
                        found = true;

                        cout << "Quantity to sell: ";
                        cin >> qty;

                        if(qty > p[i].quantity)
                        {
                            cout << "Not enough stock.\n";
                        }
                        else
                        {
                            p[i].quantity -= qty;

                            float sale = p[i].price * qty;
                            revenue += sale;

                            cout << "Sold.\n";
                            cout << "Revenue from this sale: "
                                 << sale << endl;
                        }
                    }
                }

                if(!found)
                    cout << "Product not found.\n";

                break;
            }

            case 4:
            {
                bool found = false;

                for(int i = 0; i < count; i++)
                {
                    if(p[i].quantity < 5)
                    {
                        cout << "ID: " << p[i].id << endl;
                        cout << "Name: " << p[i].name << endl;
                        cout << "Quantity: " << p[i].quantity << endl;

                        found = true;
                    }
                }

                if(!found)
                    cout << "No low-stock products\n";

                break;
            }

            case 5:
            {
                cout << "Total Revenue: " << revenue << endl;
                break;
            }

            case 6:
            {
                for(int i = 0; i < count; i++)
                {
                    cout << "\nID: " << p[i].id << endl;
                    cout << "Name: " << p[i].name << endl;
                    cout << "Price: " << p[i].price << endl;
                    cout << "Quantity: " << p[i].quantity << endl;
                }

                break;
            }

            case 7:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while(choice != 7);

    return 0;
}

