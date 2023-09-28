/*Q.1 Write a Program to create a Message class with a constructor that takes a single string with a default value.
 Create a private member of the typed string, and in the constructor simply assign the argument string to your internal string.
  Create two overloaded member functions called print( ): one that takes no arguments and simply prints the message stored in the 
  variable and one that takes a string argument,
 which it prints in addition to the internal message.*/
 
#include <iostream>
#include <string>

using namespace std;

class Message {
private:
    string message;

public:
    // Constructor with default value
   /* Message(string msg = "Default Message") : message(msg) {} */
    Message(string msg = "Default Message") {
    	message = msg;
}


    // Member function to print the internal message
    void print() {
        cout << "Internal Message: " << message << endl;
    }

    // Overloaded member function to print an additional message
    void print(string additionalMsg) {
        cout << "Internal Message: " << message << endl;
        cout << "Additional Message: " << additionalMsg << endl;
    }
};

int main() {
    // Create a Message object with the default message
    Message defaultMessage;

    // Print the default message
    defaultMessage.print();

    // Create a Message object with a custom message
    Message customMessage("Hello, World!");

    // Print the custom message
    customMessage.print();

    // Call the overloaded print function with an additional message
    customMessage.print("Have a nice day!");

    return 0;
}

