#include <iostream>

float kg2pd(float weight_in_kilo) {
    // Converts kilograms to pounds
    return weight_in_kilo * 2.20462262;
}

float convertStringToFloat(char* inputFromUser) {
    try {
        float floatValue = std::stof(inputFromUser);
        std::cout << "Converted float value: " << floatValue << std::endl;
        return floatValue;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid input: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Input out of range: " << e.what() << std::endl;
    }
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
        // TODO: Call the conversion function
        weight_in_kilo = std::stof(argv[0]);

        if (weight_in_kilo != 0) {
            // TODO: Add the formatter from precision cout
            float weight_in_pounds {0};
            weight_in_pounds = kg2pd(weight_in_kilo);
            std::cout << "Computed weight:\n" << weight_in_kilo << " is equivalent to " << weight_in_pounds << " pounds.";
            return 0;
        }

        else {
            std::cout << "0 was provided.";
        }
    }
    // Access individual arguments
    for (int i = 1; i < argc; i++) {
        std::cout << "Argument " << i << ": " << argv[i] << std::endl;
    }

    return 0;
}

