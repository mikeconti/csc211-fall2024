//Write a single for loop to print the first 50 even numbers

#include <iostream>

int main(){

    // for(int i = 0; i <= 100; i+=2){
    //     std::cout << i << " ";
    // }


    for(int i = 0; i <= 100; i++){
        if(i % 2 ==0){
            std::cout << i << " ";
        }
    }



    

    return 0;
}