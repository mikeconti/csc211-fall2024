#include <iostream>

// Implement the following public methods for the class date
// add_years, which adds a number of years to the current date
// add_months, which adds a number of months to the current date
// add_days, which adds a number of days to the current date

class Date {
    private:
        int month;
        int year;
        int day;

    public:
        
        void set(int m, int d, int y);
        void print();

        void addYears(int y);
        void addMonths(int m);
        void addDays(int d);
};

void Date::print() {
    std::cout << month << '-'  << day << '-'  << year << std::endl;
}


void Date::set(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}


void Date::addYears(int y){
        year += y;
}

void Date::addMonths(int m){
        month += m;
}

void Date::addDays(int d){
        day += d;
}

int main(){

    Date today;

    today.set(11, 04, 2023);
    today.print();
    today.addYears(1);
    today.addMonths(1);
    today.addDays(1);
    today.print();

    return 0;
}