#include <iostream>
#include <string>

using namespace std;

class DiamondCompany {
private:
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    double comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

public:
    DiamondCompany(int id, const string& name, int staff_quantity, double revenue,
                   int import_raw_diamonds, int export_diamonds, const string& ceo)
        : comp_id(id), comp_name(name), comp_staff_quantity(staff_quantity),
          comp_revenue(revenue), comp_import_raw_diamonds(import_raw_diamonds),
          comp_export_diamonds(export_diamonds), comp_ceo(ceo) {}

    void displayInfo() {
        cout << "Company ID: " << comp_id << endl;
        cout << "Company Name: " << comp_name << endl;
        cout << "CEO: " << comp_ceo << endl;
        cout << "Staff Quantity: " << comp_staff_quantity << endl;
        cout << "Annual Revenue: $" << comp_revenue << endl;
        cout << "Imported Raw Diamonds: " << comp_import_raw_diamonds << " per year" << endl;
        cout << "Exported Diamonds: " << comp_export_diamonds << " per year" << endl;
        cout << "----------------------------------------" << endl;
    }
};

int main() {
    int N;
    cout << "Enter the number of diamond companies: ";
    cin >> N;

    DiamondCompany companies(int id, string name, int staff_qnty, double revenue, int import_qnty,
	 int export_qnty, string ceo);

    for (int i = 0; i < N; ++i) {
        cout << "\nEnter details for Company " << i + 1 << ":\n";

        int id, staff_quantity, import_raw_diamonds, export_diamonds;
        double revenue;
        string name, ceo;

        cout << "Company ID: ";
        cin >> id;
        cin.ignore(); // Clear the newline character from the previous input.

        cout << "Company Name: ";
        getline(cin, name);

        cout << "CEO: ";
        getline(cin, ceo);

        cout << "Staff Quantity: ";
        cin >> staff_quantity;

        cout << "Annual Revenue (in millions): $";
        cin >> revenue;

        cout << "Imported Raw Diamonds per year: ";
        cin >> import_raw_diamonds;

        cout << "Exported Diamonds per year: ";
        cin >> export_diamonds;

        companies.DiamondCompany(id, name, staff_quantity, revenue, import_raw_diamonds, export_diamonds, ceo);
    }

    cout << "\nDiamond Company Information:\n";

    for (int i = 0; i < N; ++i) {
        companies[i].displayInfo();
    }

    delete[] companies;

    return 0;
}

