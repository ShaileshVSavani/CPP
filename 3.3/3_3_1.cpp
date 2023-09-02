/*Q.1 Write a Program to get and display N numbers of Diamond companies information using encapsulation 
and use of Parameterised Constructor by including below
mentioned attributes:
- comp_id
- comp_name
- comp_staff_quantity
- comp_revenue (per year)
- comp_import_raw_diamonds (no. of raw diamonds
imported per year)
- comp_export_diamonds (no. of diamonds per year)
- comp_ceo (name of CEO of the company)*/

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
	DiamondCompany(int id, string name, int staff_qty, double revenue,
               int import_qty, int export_qty, string ceo)
	{
	    comp_id = id;
	    comp_name = name;
	    comp_staff_quantity = staff_qty;
	    comp_revenue = revenue;
	    comp_import_raw_diamonds = import_qty;
	    comp_export_diamonds = export_qty;
	    comp_ceo = ceo;
	}

    void displayCompanyInfo() {
        cout << "Company ID: " << comp_id << std::endl;
        cout << "Company Name: " << comp_name << std::endl;
        cout << "Staff Quantity: " << comp_staff_quantity << std::endl;
        cout << "Annual Revenue: $" << comp_revenue << std::endl;
        cout << "Imported Raw Diamonds: " << comp_import_raw_diamonds << " diamonds per year" << std::endl;
        cout << "Exported Diamonds: " << comp_export_diamonds << " diamonds per year" << std::endl;
        cout << "CEO: " << comp_ceo << std::endl;
        cout << "------------------------------------\n";
    }
};

int main() {
    int N;
    cout << "Enter the number of diamond companies: ";
    cin >> N;

    DiamondCompany companies;

    for (int i = 0; i < N; ++i) {
        int id, staff_qty, import_qty, export_qty;
        double revenue;
        std::string name, ceo;

        cout << "Enter Company ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Company Name: ";
        getline(cin, name);

        cout << "Enter Staff Quantity: ";
        cin >> staff_qty;

        cout << "Enter Annual Revenue: $";
        cin >> revenue;

        cout << "Enter Imported Raw Diamonds Quantity: ";
        cin >> import_qty;

        cout << "Enter Exported Diamonds Quantity: ";
        cin >> export_qty;

        cin.ignore();

        cout << "Enter CEO Name: ";
        getline(cin, ceo);

        companies.DiamondCompany(id, name, staff_qty, revenue, import_qty, export_qty, ceo);
    }

    cout << "\nCompany Information:\n";
    for (int i = 0; i < N; ++i) {
        companies[i].displayCompanyInfo();
    }

    delete[] companies;

    return 0;
}

