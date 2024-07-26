// Week 11
// Jenna Stone
// CIS 1202 201
// July 26th, 2024


#include <iostream>
#include <cmath>  // For std::round

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
    if (cin >> value) {
        // Check for any remaining characters in input buffer
        if (cin.get() == '\n') {
            return true;
        }
        else {
            // Ignore rest of the line and return false
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return false;
        }
    }
    // Clear error state and ignore rest of the line
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return false;
}

// Function to safely read a floating-point number from input
bool readFloat(float& value) {
    if (cin >> value) {
        // Check for any remaining characters in input buffer
        if (cin.get() == '\n') {
            return true;
        }
        else {
            // Ignore rest of the line and return false
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return false;
        }
    }
    // Clear error state and ignore rest of the line
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return false;
}

// Function to safely read a double from input
bool readDouble(double& value) {
    if (cin >> value) {
        // Check for any remaining characters in input buffer
        if (cin.get() == '\n') {
            return true;
        }
        else {
            // Ignore rest of the line and return false
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return false;
        }
    }
    // Clear error state and ignore rest of the line
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return false;
}

int main() {
    int intValue;
    float floatValue;
    double doubleValue;

    cout << "Enter an integer value: ";
    if (readInt(intValue)) {
        cout << "Half of " << intValue << " (int) is " << half(intValue) << endl;
    }
    else {
        cout << "Invalid input for integer." << endl;
    }

    cout << "Enter a float value: ";
    if (readFloat(floatValue)) {
        cout << "Half of " << floatValue << " (float) is " << half(floatValue) << endl;
    }
    else {
        cout << "Invalid input for float." << endl;
    }

    cout << "Enter a double value: ";
    if (readDouble(doubleValue)) {
        cout << "Half of " << doubleValue << " (double) is " << half(doubleValue) << endl;
    }
    else {
        cout << "Invalid input for double." << endl;
    }

    return 0;
}
