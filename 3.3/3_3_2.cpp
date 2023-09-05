/*Q.2 Write a Program to get and display N numbers of Fast Food cafe information
 using encapsulation and the use of a Default constructor by including the below-mentioned 
 attributes:
- cafe_id
- cafe_name
- cafe_type (like a rooftop or normal)
- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
- cafe_location (city name)
- cafe_establish_year
- cafe_staff_quantity*/

		
#include <iostream>
#include <string>
using namespace std;

class FastFoodCafe {
private:
    int cafe_id;
    string cafe_name;
    string cafe_type;
    string cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    FastFoodCafe() {
	    cafe_id = 0;
	    cafe_name = "";
	    cafe_type = "";
	    cafe_rating = "";
	    cafe_location = "";
	    cafe_establish_year = 0;
	    cafe_staff_quantity = 0;
	}

    void setData(int id, string name, string type,
                 string rating, string location,
                 int establish_year, int staff_qty) {
        cafe_id = id;
        cafe_name = name;
        cafe_type = type;
        cafe_rating = rating;
        cafe_location = location;
        cafe_establish_year = establish_year;
        cafe_staff_quantity = staff_qty;
    }

    void displayCafeInfo() {
        cout << "Cafe ID: " << cafe_id <<endl;
        cout << "Cafe Name: " << cafe_name <<endl;
        cout << "Cafe Type: " << cafe_type <<endl;
        cout << "Cafe Rating: " << cafe_rating << endl;
        cout << "Cafe Location: " << cafe_location << endl;
        cout << "Established Year: " << cafe_establish_year << endl;
        cout << "Staff Quantity: " << cafe_staff_quantity << endl;
        cout << "------------------------------------\n";
    }
};

int main() {
    int n;
    cout << "Enter the number of fast food cafes: ";
    cin >> n;

    FastFoodCafe cafes[n];

    for (int i = 0; i < n; ++i) {
        int id, establish_year, staff_qty;
        string name, type, rating, location;

        cout << "Enter Cafe ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Cafe Name: ";
        cin>>name;

        cout << "Enter Cafe Type (e.g., rooftop, normal): ";
		cin>>type;
		
        cout << "Enter Cafe Rating (e.g., 1 Star, 2 Star, ... 5 Star): ";
		cin>>rating;
		
        cout << "Enter Cafe Location (city name): ";
		cin>>location;
		
        cout << "Enter Established Year: ";
        cin >> establish_year;

        cout << "Enter Staff Quantity: ";
        cin >> staff_qty;

        cafes[i].setData(id, name, type, rating, location, establish_year, staff_qty);
    }

    cout << "\nCafe Information:\n";
    for (int i = 0; i < n; ++i) {
        cafes[i].displayCafeInfo();
    }

    return 0;
}

