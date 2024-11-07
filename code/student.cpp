#include <iostream>

struct Student{

    int grades[5] = {1,2,3,4,5};
    int finalGrade = 80;

};

int main(){

    Student mike;

    std::cout << mike.finalGrade << std::endl;

    std::cout << mike.grades[0];

    for(int i = 0; i < 5; i++){
        std::cout << mike.grades[i] << " ";
    }

    Student studentArray[5];

    for(int i = 0 ; i < 5; i++){
        studentArray[i].finalGrade = (i * 20);
    }


    for(int i = 0 ; i < 5; i++){
        for(int j = 0; j < 5; j++){
            std::cout << studentArray[i].grades[j] << " ";
        }
        std::cout << std::endl;
    }


    return 0;
}