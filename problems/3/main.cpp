#include <iostream>

int main(){

    long long int num = 600851475143;

    long long int biggestPrime = 1;

    // Checking for factors of 2
    // The number is odd so this was not really necessary
    while (num  % 2 == 0){
        biggestPrime = 2;
        num >>= 2;
    }

    // Checking for Factors of 3
    while (num  % 3 == 0){
        biggestPrime = 3;
        num /= 3;
    }


    // Checks for all odd factors starting with 5 
    // (and in increments of 6 since we checked for 2 and 3)

    for (long long int i = 5; i * i <= num; i += 6){
        while (num % i == 0){
            biggestPrime = i;
            num /= i;
        }
        
        while (num % (i + 2) == 0){
            biggestPrime = i + 2;
            num /= (i + 2);
        }
    }

    if (num > 2){
        biggestPrime = num;
    }

    std::cout << biggestPrime << "\n";



    return 0;
}