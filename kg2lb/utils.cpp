
#include <stdlib.h> 
double kg2pd(double weight_in_kilo) {
    // Converts kilograms to pounds
    return weight_in_kilo * 2.20462262;
}

// TODO: Place this in a Header file?
double convertStringToDouble(char* input_from_user) {
    // atof is a C function that returns a double: $ man atof
    double double_value = atof(input_from_user);
    //std::cout << "Converted float value: " << double_value << std::endl;
    return double_value;
} 