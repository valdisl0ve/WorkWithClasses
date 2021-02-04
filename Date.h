#ifndef UNTITLED_DATE_H
#define UNTITLED_DATE_H

class Date {
private:
    int year;
    int month;
    int day;
public:
    void SetYear(int year)
    {
        if (year < 0) {
            this->year = year * -1;
        } else {
            this->year = year;
        }
    }

    Date() {}
    Date(int year, int month, int day)
    {

    }
};

#endif //UNTITLED_DATE_H
