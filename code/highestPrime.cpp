// Write a function  highest_prime that takes an integer n > 1 from stdin and outputs the 
// largest prime number less than or equal than n to the stdout
// Write an is_prime function to help find highest_prime

#include <iostream>


bool isPrime(int n){
    for(int i = 2; i < n ;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int highestPrime(int n){
    int highest;

    for(int i = n; i > 1 ; i--){
        if(isPrime(i)){
            highest = i;
            break;
        }
    }

return highest;
}


int main(){

    std::cout << highestPrime(15);


    return 0;
}