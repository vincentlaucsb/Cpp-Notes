/*
To compile (on Ubuntu):
g++ -std=c++11 prime_number.cpp -o prime_number

To run:
./prime_number
*/

#include <iostream>

// Generates prime numbers when get_prime() is called
class PrimeNumber {
    public:
        int current_number = 2;
        int get_prime();
    
    private:
        bool is_prime(int n);
    
};

// Member functions
int PrimeNumber::get_prime() {
    if (current_number == 2) {
        this->current_number += 1;
        return 2;
    } else {
        int temp;
        
        while (true) {
            if (this->is_prime(current_number)) {
                temp = current_number;
                current_number += 1;
                
                return temp;
            } else {
                current_number += 1;
            }
        }
    }
}

bool PrimeNumber::is_prime(int n) {
    // Returns True or False if a number is prime or not
    for (int i = 2; i <= (n + 1)/2; i++) {
        // n is divisible by some factor --> Is not prime
        if (n % i == 0) {
            return false;
        }
    }
        
    // No factors found
    return true;
}

// Main function
int main() {
    PrimeNumber meme_gen;
    
    // Print out the first 20 primes
    for (int i = 0; i < 20; i++) {
        std::cout << meme_gen.get_prime() << std::endl;
    }
    
    return 0;
}