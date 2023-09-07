/*Q.2 Write a Program to make Supermarket Billing System.
Requirements:
(A) User Input:
- Item Number
- Item Name
- Quantity
- Price
- Discount
(B) Verify User Id And Password
(C) Display Records:
- All Records
- By Searching Item Number*/

#include <iostream>
#include <string>

using namespace std;

class Item {
public:
    int itemNumber;
    string itemName;
    int quantity;
    double price;
    double discount;

    Item(int number, string name, int qty, double cost, double disc) {
        itemNumber = number;
        itemName = name;
        quantity = qty;
        price = cost;
        discount = disc;
    }
};

class SupermarketBillingSystem {
public:
    // Function to add an item to the system
    void addItem(int& itemCount, Item items[], int itemNumber, const string& itemName, int quantity, double price, double discount) {
        if (itemCount < 100) {
            items[itemCount++] = Item(itemNumber, itemName, quantity, price, discount);
            cout << "Item added successfully.\n";
        } else {
            cout << "Item storage is full. Cannot add more items.\n";
        }
    }

    // Function to display all records
    void displayAllRecords(int itemCount, Item items[]) {
        cout << "All Records:\n";
        cout << "Item No. | Item Name | Quantity | Price | Discount\n";
        for (int i = 0; i < itemCount; i++) {
            cout << items[i].itemNumber << " | "
                 << items[i].itemName << " | "
                 << items[i].quantity << " | "
                 << items[i].price << " | "
                 << items[i].discount << "\n";
        }
    }
};

int main() {
    SupermarketBillingSystem system;
    int itemCount = 0;
    Item items[100];

    int choice;
    do {
        cout << "\nSupermarket Billing System Menu:\n";
        cout << "1. Add an Item\n";
        cout << "2. Display All Records\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                int itemNumber, quantity;
                string itemName;
                double price, discount;
                cout << "Enter item number: ";
                cin >> itemNumber;
                cout << "Enter item name: ";
                cin.ignore();
                getline(cin, itemName);
                cout << "Enter quantity: ";
                cin >> quantity;
                cout << "Enter price: ";
                cin >> price;
                cout << "Enter discount: ";
                cin >> discount;
                system.addItem(itemCount, items, itemNumber, itemName, quantity, price, discount);
                break;
            case 2:
                system.displayAllRecords(itemCount, items);
                break;
            case 3:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}

