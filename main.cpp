#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    std::cout << "Hi!\n";
    std::cout << "Exercise 1.\n";
    std::cout << "Enter x:\n";
    int x;
    std::cin >> x;
    std::cout << std::showpos << pow(x,4)-6*pow(x,3)+1 << "\n";
    std::cout << "The end of the task 1.\n";
    std::cout << "Exercise 2.\n" << "Enter a (a >= 0):\n";
    unsigned int a;
    std::cin >> a;
    std::cout << std::noshowpos << std::setprecision(5) << abs(a)+4*sqrt(a) << "\n" << "The end of the task 2.\n";
    std::cout << "Exercise 3.\n";
    std::cout << "Enter k (1 or 0):\n";
    bool k;
    std::cin >> k;
    std::cout << "Enter l (1 or 0):\n";
    bool l;
    std::cin >> l;
    std::cout << "Enter m (1 or 0):\n";
    bool m;
    std::cin >> m;
    std::cout << "Enter n (1 or 0):\n";
    bool n;
    std::cin >> n;
    bool g;
    g = n && l || ((!k) ^ m);
    std::cout << std::boolalpha << g << "\n" << "The end of the task 3.\n";
    std::cout << "Exercise 4.\n" << "Enter b (0 <= b <= 7):\n";
    short b;
    std::cin >> b;
    b = pow(2,b);
    std::cout << std::oct << b << " - the result in Octal sistem of numerals.\n";
    std::cout << std::dec << b << " - the result in Decimal sistem of numerals.\n";
    std::cout << "The end of the task 4.\n";
    std::cout << "Exercise 5.\n";
    std::cout << "Enter f (f >= 0):\n";
    unsigned short f;
    std::cin >> f;
    std::cout << "Enter c (c >= 0):\n";
    unsigned short  c;
    std::cin >> c;
    std::cout << "Enter e (e >= 0):\n";
    unsigned short e;
    std::cin >> e;
    std::cout << "Enter d (d >= 0):\n";
    unsigned short d;
    std::cin >> d;
    short z;
    z = f ^ ((~c) & e) | d;
    std::cout << std::hex << std::showbase << std::setw(8) << std::internal << std::setfill('0') << z << "\n";
    std::cout << "The end of the task 5.\n" << "Goodbye!" << std::endl;
    return 0;
}
