#include<iostream>

bool is_prime(unsigned long int num) {
    if(num <=3)
        return (num > 0);
    else if ((num % 2 == 0) || (num % 3) == 0)
        return false;
    else{
        for (int i = 5;  i*i <= num; i+= 6){
            if( (num % i) == 0 || (num % (i + 2) == 0))
                    return false;
        }
        return true;
    }
}


int main() {
    unsigned long number;
    std::cout << "Enter the number: " << std::endl;
    std::cin >> number;

    if(is_prime(number))
        std::cout << "The number " << number << "is prime" << std::endl;
    else
        std::cout << "The number " << number << "is not prime" << std::endl;

    return 0;
}

