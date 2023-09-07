#include <iostream>
#include <string>

using namespace std;

class Product {
public:
    int itemNumber;
    string itemName;
    int quantity;
    double price;
    double discount;

    // Constructor to initialize product details
    Product(int num, const string& name, int qty, double prc, double disc)
        : itemNumber(num), itemName(name), quantity(qty), price(prc), discount(disc) {}

    // Display product details
    void display() const {
        cout << "Item Number: " << itemNumber << endl;
        cout << "Item Name: " << itemName << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price: $" << price << endl;
        cout << "Discount: " << (discount * 100) << "%" << endl;
    }

    // Search for a product by item number
    bool searchByItemNumber(int num) const {
        return itemNumber == num;
    }
};

int main() {
    const int MAX_PRODUCTS = 100; // Maximum number of products
    Product products[MAX_PRODUCTS]; // Array of Product objects
    int productCount = 0; // Number of products in the array

    // Dummy data for products
    products[productCount++] = Product(101, "Item A", 10, 5.99, 0.10);
    products[productCount++] = Product(102, "Item B", 20, 2.49, 0.05);
    products[productCount++] = Product(103, "Item C", 15, 3.79, 0.15);

    int choice;
    do {
        cout << "\nSupermarket Billing System Menu:\n";
        cout << "1. Display all records\n";
        cout << "2. Search by item number\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "All Records:\n";
                for (int i = 0; i < productCount; ++i) {
                    products[i].display();
                    cout << endl;
                }
                break;
            case 2:
                int searchItemNumber;
                cout << "Enter item number to search: ";
                cin >> searchItemNumber;
                bool found = false;
                for (int i = 0; i < productCount; ++i) {
                    if (products[i].searchByItemNumber(searchItemNumber)) {
                        products[i].display();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Item not found.\n";
                }
                break;
            case 3:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 3);

    return 0;
}

