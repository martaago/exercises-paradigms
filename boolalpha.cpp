#include <iostream>

int main() {
    bool b = true;
    std::cout << std::boolalpha << b << '\n';
    std::cout<< std::noboolalpha << b << '\n';
    return 0;
}