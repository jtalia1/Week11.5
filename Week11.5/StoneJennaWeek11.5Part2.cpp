// Week 11
// Jenna Stone
// CIS 1202 201
// July 26th, 2024

#include <iostream>
#include <cmath>  // For std::round
#include <string>
#include <stdexcept> // For std::invalid_argument and std::out_of_range

using namespace std;

// Templated function for floating-point types
template <typename T>
T half(T value) {
    return value / 2.0;
}

// Function for integer types
int half(int value) {
    return static_cast<int>(round(static_cast<double>(value) / 2.0));
}

// Function to safely read an integer from input
bool readInt(int& value) {
    string input;
    getline(cin, input); // Read the entire line as a string

    // Attempt to convert the string to an integer
    try {
        size_t pos;
        value = stoi(input, &pos);
        return pos == input.length(); // Ensure the whole string was used for conversion
    }
    catch (const invalid_argument& e) {
        // Handle the case where the input is not a valid integer
        return false;
    }
    catch (const out_of_range& e) {
        // Handle the case where the input is too large or too small for an integer
        return false;
    }
}

// Function to safely read a floating-point number from input
bool readFloat(float& value) {
    string input;
    getline(cin, input); // Read the entire line as a string

    // Attempt to convert the string to a float
    try {
        size_t pos;
        value = stof(input, &pos);
        return pos == input.length(); // Ensure the whole string was used for conversion
    }
    catch (const invalid_argument& e) {
        // Handle the case where the input is not a valid float
        return false;
    }
    catch (const out_of_range& e) {
        // Handle the case where the input is too large or too small for a float
        return false;
    }
}

// Function to safely read a double from input
bool readDouble(double& value) {
    string input;
    getline(cin, input); // Read the entire line as a string

    // Attempt to convert the string to a double
    try {
        size_t pos;
        value = stod(input, &pos);
        return pos == input.length(); // Ensure the whole string was used for conversion
    }
    catch (const invalid_argument& e) {
        // Handle the case where the input is not a valid double
        return false;
    }
    catch (const out_of_range& e) {
        // Handle the case where the input is too large or too small for a double
        return false;
    }
}

int main() {
    int intValue;
    float floatValue;
    double doubleValue;

    // Prompt for and read an integer value
    cout << "Enter an integer value: ";
    if (readInt(intValue)) {
        cout << "Half of " << intValue << " (int) is " << half(intValue) << endl;
    }
    else {
        cout << "Invalid input for integer." << endl; // Notify if the input was invalid
    }

    // Prompt for and read a float value
    cout << "Enter a float value: ";
    if (readFloat(floatValue)) {
        cout << "Half of " << floatValue << " (float) is " << half(floatValue) << endl;
    }
    else {
        cout << "Invalid input for float." << endl; // Notify if the input was invalid
    }

    // Prompt for and read a double value
    cout << "Enter a double value: ";
    if (readDouble(doubleValue)) {
        cout << "Half of " << doubleValue << " (double) is " << half(doubleValue) << endl;
    }
    else {
        cout << "Invalid input for double." << endl; // Notify if the input was invalid
    }

    return 0;
}
