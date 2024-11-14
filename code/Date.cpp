#include <iostream>

class Date {
    private:
        int month;
        int year;
        int day;

    public:
        
        void set(int m, int d, int y);
        void print();
};

void Date::print() {
    std::cout << month << '-'  << day << '-'  << year << std::endl;
}


void Date::set(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}


int main(){

    Date today;

    today.set(11, 04, 2023);
    today.print();
    today.addYears(1);
    today.addMonths(1);
    today.addDay(1);
    today.print();

    return 0;
}