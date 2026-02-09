#include <iostream>

int main() {
    
    long long int total = 0;

    for (long long int i = 1; i <= 958000; i++) {
        if (i % 2 == 1){
            total += (i * i);
        }
    }

    std::cout << total << "\n";



    return 0;
}