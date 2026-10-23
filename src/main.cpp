#include <iostream>
#include <vector>

int main() {
    // Closing prices for the last 10 days
    std::vector<double> prices{100, 102, 104, 101, 105, 108, 015, 110, 104, 106};
    std::cout << "Prices";
    for (double p: prices) {
        std::cout << ' '  << p;
    }

    std::cout <<'\n';

    double sum = 0;
    for(double p: prices) {
        sum += p;
    }

    double average = sum / prices.size();

    std::cout << "Days " << prices.size() << '\n';
    std::cout << "Average " << average << '\n';

    return 0;
}