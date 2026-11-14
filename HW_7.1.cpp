#include <iostream>

int main() {
    short a = 1;
    int b = 11;
    long c = 12344458;
    long long d = 1234567890000;
    float e = 1.1;
    double f = 1.22;
    long double g = 1.3347468;
    bool h = true;

    std::cout << "short\t\t" << &a << '\t' << sizeof(a) << std::endl;
    std::cout << "int\t\t" << &b << '\t' << sizeof(b) << std::endl;
    std::cout << "long\t\t" << &c << '\t' << sizeof(c) << std::endl;
    std::cout << "long long\t" << &d << '\t' << sizeof(d) << std::endl;
    std::cout << "float\t\t" << &e << '\t' << sizeof(e) << std::endl;
    std::cout << "double\t\t" << &f << '\t' << sizeof(f) << std::endl;
    std::cout << "long double\t" << &g << '\t' << sizeof(g) << std::endl;
    std::cout << "bool\t\t" << &h << '\t' << sizeof(h) << std::endl;

}