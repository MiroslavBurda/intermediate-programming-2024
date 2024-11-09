#include <cassert>
#include <iostream>
#include <cmath>

// Vypište obdélník o zadaných parametrech
// Vraťte 0 pokud vše v pořádku, -1 pokud nastala chyba
int hollow_rect(int x, int y, int thickness) {
    std::cout << "Obdélník: " << std::endl;
    if ((x <= 0) || (y <= 0) || (thickness <= 0))
        return -1;
    if ( (x <= thickness) || (y <= thickness) )
        return -1;

    for (size_t i = 0; i < y; i++)
    {
        for (size_t j = 0; j < x; j++)
        {
            if ( ((j >= thickness) && (j < (x - thickness))) &&
                 ((i >= thickness) && (i < (y - thickness)))    )
                std::cout << "0";
            else 
                std::cout << "*";
        }
        std::cout << std::endl;
    }
    

    return 0;
}

// Vraťte a na n
double power(int a, int n) {    
    return pow(a, n);
}

// Vraťte idx-té fibonacciho číslo
int fibonacci(int idx) {
    int fibA = 1;
    int fibB = 0;
    int fibC = 0;
    for (size_t i = 0; i < idx; i++)
    {
        fibC = fibA + fibB;
        fibA = fibB;
        fibB = fibC; 
    }
    
    return fibC;
}

int fibRec(int idx) {
    if (idx < 1)
        return 0;
    if ((idx == 1) || (idx == 2)) 
        return 1;

    return fibRec(idx-1) + fibRec(idx-2);
}


int main() {
    std::cout << ( abs(hollow_rect(12, 10, 3)) ? "Obdélník chyba" : "Obdélník OK") << std::endl;
    std::cout << "Mocnina: " << std::endl;
    std::cout << power(-2, 2) << std::endl;
    
    std::cout << "Fib cyklus:"  << std::endl;
    for (size_t i = 0; i < 8; i++)
    {
        std::cout << fibonacci(i) << ", ";
    }
    std::cout << std::endl;

    std::cout << "Fib rekurze:"  << std::endl;
    for (size_t i = 0; i < 8; i++)
    {
        std::cout << fibRec(i) <<  ", ";
    }
    std::cout << std::endl;
    
    
}
