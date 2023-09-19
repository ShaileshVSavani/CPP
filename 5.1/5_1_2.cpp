/*Q.2 Write a Program to implement method overriding by following the below-mentioned criteria:- Class Cricket -> Class T20Match
- Class Cricket -> Class TestMatch
- Override getTotalOvers() method in both classes*/

#include <iostream>
using namespace std; 

class Cricket {
public:
    int getTotalOvers() {
        return 50; 
    }
};

class T20Match : public Cricket {
public:
    int getTotalOvers(){
        return 20; 
    }
};

class TestMatch : public Cricket {
public:
    int getTotalOvers() {
        return 90; 
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

