#include <iostream>
#include <string>

int main() {
    // Prompt user for their name
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    
    // Print greeting message
    std::cout << "Hello world from " << name << std::endl;
    return 0;
}
