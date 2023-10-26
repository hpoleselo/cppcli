#include <iostream>


double convertDoubleToFloat(char* input_from_user) {
    try {
        // atof is a C function that returns a double: $ man atof
        double double_value = std::atof(input_from_user);
        //std::cout << "Converted float value: " << double_value << std::endl;
        return double_value;
    // TODO: Is this catch useful for C-Style strings?
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid input: " << e.what() << std::endl;
        throw e;
    } catch (const std::out_of_range& e) {
        std::cerr << "Input out of range: " << e.what() << std::endl;
        throw e;
    }
} 

int main() {
    std::cout << "Hey!\n";
    return 0;
}

float pd2kg(float weight_in_pounds) {
    // Converts pounds to kilograms
    return weight_in_pounds * 0.45359237;
}