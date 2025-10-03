// Lab_04_4.cpp
// <Лесів Божена>
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком.
// Варіант 16
#include <iostream>
#include <iomanip> 
#include <cmath>   

int main() {

    double R1, R2, x_start, x_end, dx;

    
    std::cout << " R1 (>0): ";
    std::cin >> R1;
    std::cout << " R2 (>0): ";
    std::cin >> R2;

    std::cout << "X : ";
    std::cin >> x_start;

    do {
        std::cout << " X: ";
        std::cin >> x_end;
    } while (x_end < x_start);

    do {
        std::cout << " dx (>0): ";
        std::cin >> dx;
    } while (dx <= 0.0);

    std::cout << "--------------------------\n";
    std::cout << "|" << std::setw(10) << "X" << " |" << std::setw(10) << "Y" << " |\n";
    std::cout << "--------------------------\n";

    for (double x = x_start; x <= x_end; x += dx) {
        double y = 0.0;

        if (x <= -R1) {
            y = x;
        }
        else if (x > -R1 && x <= 0) {
            y = -R1 + sqrt(pow(R1, 2) - pow(x, 2));
        }
        else if (x > 0 && x <= R2) {
            y = R2 - sqrt(pow(R2, 2) - pow(x, 2));
        }
        else if (x > R2 && x <= 4) {
            y = -R1;
        }
        else if (x > 4 && x <= 6) {
            y = (R1 / 2.0) * (x - 6);
        }
        else { 
            y = x - 6;
        }

        std::cout << "|" << std::setw(10) << std::fixed << std::setprecision(3) << x
            << " |" << std::setw(10) << std::fixed << std::setprecision(3) << y
            << " |\n";
    }

   
    std::cout << "--------------------------\n";

    return 0;
}
