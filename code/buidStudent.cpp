#include <iostream>

struct Student{

    std::string name;
    std::string major;
    int studentID;

};


void buildStudent(Student &someStudent){
    std::cout << "Enter a name : ";
    std::cin >> someStudent.name;
    
    std::cout << "Enter a major : ";
    std::cin >> someStudent.major;

    std::cout << "Enter a student ID : ";
    std::cin >> someStudent.studentID;

}

void printStudent(const Student someStudent){
    std::cout << "Name: " << someStudent.name << std::endl;
    std::cout << "Major: " << someStudent.major << std::endl;
    std::cout << "ID: " << someStudent.studentID << std::endl;
}

void changeMajor(Student &someStudent){

    std::cout << "Enter a new major : ";
    std::cin >> someStudent.major;
}





int main(){

    Student sarah;

    buildStudent(sarah);

    printStudent(sarah);

    changeMajor(sarah);




    return 0;
}