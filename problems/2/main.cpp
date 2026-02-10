#include <iostream>

int main(){

    int sum = 0;

    int currentFib = 1;
    int lastFib = 0;

    while (currentFib < 4000000){
        if (currentFib  % 2 == 0){sum += currentFib;}
        currentFib += lastFib;
        lastFib = currentFib - lastFib;
    }

    std::cout << sum << "\n"; 

    return 0;
}
