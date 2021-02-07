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

    int GetYear(){
        return year;
    }

    void SetMonth(int month)
    {
        if (month < 1) {
            this->month = 1;
        } else if (month > 12) {
            this->month = 12;
        } else {
            this->month = month;
        }
    }

    int GetMonth(){
        return month;
    }

    void SetDay(int day)
    {
        if (day < 1) {
            this->day = 1;
        } else if (day > 31) {
            this->day = 31;
        } else {
            this->day = day;
        }
    }

    int GetDay(){
        return day;
    }



    Date() {}
    Date(int year, int month, int day)
    {
        SetYear(year);
        SetMonth(month);
        SetDay(day);
    }
};

#endif //UNTITLED_DATE_H
