#include <cassert>
#include <iostream>

// Napište funckci, která vrátí součin dvou čísel
int multiply(int a, int b) {
    return a*b;
}

// Napište funkci, která rozhodne jestli číslo je sudé
bool is_even(int x) {
    return ((x+1) % 2);
}

// Vypište všechny čísla od start do stop (včetně)
void print_numbers(int start, int stop) {
    for (int i = start; i <= stop; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

}

// Naimplementujte funkci která počítá faktoriál
// Faktoriál čísla x je definovaný jako součin všech kladných čísel <= x
int factorial(int max) {
    int i = 1;
    int fact = 1;
    while (i <= max) {
        fact = fact * i;
        i++;
    }
    return fact;
}

// Funkce vypíše count hvězdiček
void print_stars(unsigned int count) {
    for(unsigned int i = 0; i < count; i++) {
        std::cout << "*";
    }
    std::cout << std::endl;
}

// Funkce vypíše obdélníček z hvězdiček
void print_rectangle(unsigned int sirka, unsigned int vyska) {
    for (size_t line = 0; line < vyska; line++)
    {
        for (size_t i = 0; i < sirka; i++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

// Funkce vypíše prázdný obdélníček z hvězdiček
void print_rectangle_void(unsigned int sirka, unsigned int vyska) {
    for (size_t line = 0; line < vyska; line++)
    {
        for (size_t i = 0; i < sirka; i++)
        {
            if ( ( (i == 0) || (i == (sirka -1)) ) || ( ( (line == 0) || (line == (vyska -1))  ) ) )
                std::cout << "*";
            else 
                std::cout << " ";
        }
        std::cout << std::endl;
    }
}

// Funkce vypíše takovýto trojúhelník o zadané výšce
// *
// **
// ***
// ****
void print_pyramid_l(unsigned int height) {
    for (size_t count = 1; count <= height; count++)
    {
        for (size_t i = 0; i < count; i++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

// Funkce vypíše takovýto trojúhelník o zadané výšce
//    *
//   **
//  ***
// ****
void print_pyramid_r(unsigned int height) {
    for (size_t line = 1; line <= height; line++)
    {
        for (size_t i = 1; i <= (height); i++)
        {
            if (i <= (height - line)) 
            {
                std::cout << " ";//<< line << ","<< i;        
            }
            else
            {
                std::cout << "*";
            }    
        }
        std::cout << std::endl;
    }
}

// Funkce vypíše takovýto trojúhelník o zadané výšce
//    *
//   ***
//  *****
// *******
void print_pyramid(unsigned int height) {
    for (size_t line = 1; line <= height; line++)
    {
        for (size_t ch = 1; ch <= (2*height - 1); ch++)
        {
            if ( (ch > (height - line) ) && (ch < (height + line) ) )
                std::cout << "*";
            else 
                std::cout << " ";//<< line << ","<< i;   
        }
        std::cout << std::endl;
        
    }   
}

// Funkce vypíše takovýto trojúhelník o zadané výšce
// *******
//  *****
//   ***
//    *
void print_pyramid_inverse(unsigned int height) { 
    for (size_t line = height; line >= 1; line--)
    {
        for (size_t ch = 1; ch <= (2*height - 1); ch++)
        {
            if ( (ch > (height - line) ) && (ch < (height + line) ) )
                std::cout << "*";
            else 
                std::cout << " ";//<< line << ","<< i;   
        }
        std::cout << std::endl;
        
    }   
}

int main() {
    int test_number = 5;
    std::cout << test_number << " * 2 : " << multiply(test_number, 2) << std::endl;
    std::cout << "Číslo "<< test_number << " je sudé?: " << is_even(test_number) << std::endl;
    print_numbers(-test_number, 2);
    std::cout << "Faktoriál "<< test_number << ": " << factorial(test_number) << std::endl;
    print_stars(test_number);
    print_rectangle( 10, 20);
    std::cout << std::endl;
    print_rectangle_void( 10, 20);
    print_pyramid_l(test_number);
    std::cout << std::endl;
    print_pyramid_r(test_number);
    std::cout << std::endl;
    print_pyramid(test_number);
    std::cout << std::endl;
    print_pyramid_inverse(test_number);
}
