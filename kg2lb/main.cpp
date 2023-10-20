#include <iostream>

int main(int argc, char **argv) {
    // Check if there are command-line arguments
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " <your_argument>" << std::endl;
        return 1;
    }

    // Access command-line arguments
    std::cout << "Total number of arguments: " << argc - 1 << std::endl;
    
    // Access individual arguments
    for (int i = 1; i < argc; i++) {
        std::cout << "Argument " << i << ": " << argv[i] << std::endl;
    }

    return 0;
}