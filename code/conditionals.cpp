// Write a program in C++ (on paper) that:
// reads the number of hours
// calculates payment:
// if number of hours no greater than 40, payment is calculated using the regular hourly rate of $35
// if overtime, payment is calculated using the regular hourly rate for the first 40 hours and the special 
// rate of $50 for the remaining hours
// prints the calculated payment

#include <iostream>

int main(){

    int hoursWorked, overtime, payment;

    std::cout << "How many hours worked?" << std::endl;
    std::cin >> hoursWorked;


    if(hoursWorked > 40){

        overtime = hoursWorked - 40;
        payment = (overtime * 50) + (40 * 35);
    }
    else{
        payment = hoursWorked * 35;
    }

    return 0;
}