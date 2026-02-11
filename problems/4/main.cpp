#include <iostream>
#include <string>

int main(){

    int biggest = 0;

    // iterates from 999 through 99 (probably some big optimizations could be done here)

    for (int i = 999; i > 99; i--){
        for (int j = i; j > 99; j--){
            std::string str = std::to_string(j*i);

            // checking for palindromes
            if (str.length() == 6 && str[0] == str[5] &&
                str[1] == str[4] &&
                str[2] == str[3] && j*i > biggest){
                    biggest = j*i;
            }
        }
    }

    std::cout << biggest << "\n";

    return 0;
}