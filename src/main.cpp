#include <iostream>
#include <string>
#include <vector>

int main() {
    std::cout << "Hello World\n";

    // A small taste of modern C++ ( C++17 ): auto, range-for, std::vector
    std::vector<std::string> symbols{"APPL", "MSFT", "GOOG"};
    for (const auto& s: symbols) {
        std::cout << "Watching: " << s << '\n';
    }

    return 0;
}