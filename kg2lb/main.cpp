#include <iostream>

float kg2pd(float weight_in_kilo) {
    // Converts kilograms to pounds
    return weight_in_kilo * 2.20462262;
}

// TODO: Place this in a Header file?
double convertStringToDouble(char* input_from_user) {
    // atof is a C function that returns a double: $ man atof
    double double_value = std::atof(input_from_user);
    //std::cout << "Converted float value: " << double_value << std::endl;
    return double_value;
} 

int main(int argc, char **argv) {
    // Check if there are command-line arguments
    if (argc < 2) {
        std::cout << "Please provide a number in kilograms to get its correspondence in pounds.\nUsage: " << argv[0] << " <your_argument>" << std::endl;
        return 1;
    }

    int total_number_of_arguments {0};
    total_number_of_arguments = argc - 1;
    
    if (total_number_of_arguments > 1) {
        std::cout << "Please provide just one number, received: " << total_number_of_arguments << std::endl;
    }
    else {
        float weight_in_kilo {0};
        weight_in_kilo = convertStringToDouble(argv[1]);

        if (weight_in_kilo != 0) {
            // TODO: Add the formatter from precision cout
            float weight_in_pounds {0};
            weight_in_pounds = kg2pd(weight_in_kilo);
            std::cout << "Computed weight: " << weight_in_kilo << "kg is equivalent to " << weight_in_pounds << " pounds." << std::endl;
            return 0;
        }

        else {
            std::cout << "0 was provided.\n";
        }
    }

    return 0;
}

