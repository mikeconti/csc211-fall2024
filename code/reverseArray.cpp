// Write a function that takes an array and reverses it's contents

#include <iostream>

void printArray(int arr[], int len){
    for(int i = 0 ; i < len; i++){
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

void reverseArr(int arr[], int len){
    int temp;
    int tail = arr[len - 1];
    for(int i = 0 ; i < len/2; i++){
        temp = arr[i];
        arr[i] = tail - i;
        arr[tail - i] = temp;
    }

}


int main(){

    int len = 5;
    int arr[5];
    
    for(int i = 0 ; i < 5; i++){
        arr[i] = i;
    }

    printArray(arr, len);

    reverseArr(arr, len);

    printArray(arr, len);
    

    return 0;
}