#include <iostream>
#include <cmath>

double a;
double b;
double c;

int main(){
    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Third side is: " << c;
}