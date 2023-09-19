#include <iostream>

using namespace std; // Add the using namespace directive

class Cricket {
public:
    int getTotalOvers() {
        return 50; // Default overs for regular cricket match
    }
};

class T20Match : public Cricket {
public:
    int getTotalOvers() override {
        return 20; // Overrides the method for T20 match
    }
};

class TestMatch : public Cricket {
public:
    int getTotalOvers() override {
        return 90; // Overrides the method for Test match
    }
};

int main() {
    Cricket regularMatch;
    T20Match t20;
    TestMatch test;

    cout << "Regular Cricket Match - Total Overs: " << regularMatch.getTotalOvers() << endl;
    cout << "T20 Match - Total Overs: " << t20.getTotalOvers() << endl;
    cout << "Test Match - Total Overs: " << test.getTotalOvers() << endl;

    return 0;
}

