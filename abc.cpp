#include <iostream>
#include <cstring>

void insecureFunction(const char* input) {
    char buffer[10];  // Small fixed-size buffer

    // 🚨 Potential Buffer Overflow: No bounds check before copying input
    strcpy(buffer, input);

    std::cout << "You entered: " << buffer << std::endl;
}

int main() {
    char userInput[50]; // Larger buffer
    std::cout << "Enter some text: ";
    std::cin.getline(userInput, 50);

    insecureFunction(userInput);  // 🚨 Unsafe function call

    return 0;
}
